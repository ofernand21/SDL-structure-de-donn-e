//Travail de Fernand Ouedraogo et Farida Savadogo pour le compte du projet

//Dernière modification: 20 Octobre 2022

//🌍️🌍️ La fonction Principal de DDS_VT

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Traitement/fonctionVisual.h"
#include "Traitement/fonctionVisual.c"

int main(int argc, char *argv[])
{
   SDL_Window *ecran = NULL;
   SDL_Texture *texture = NULL;
   SDL_Renderer *rendu = NULL;
   SDL_Surface *surface = NULL;
   
   if(SDL_Init(SDL_INIT_VIDEO) != 0)
   {
       fprintf(stderr,  "Erreur SDL_INIT: %s\n", SDL_GetError());
       return EXIT_FAILURE;
   }
   
   ecran = SDL_CreateWindow("DDS-VT", 0, 0, 1300, 650, SDL_WINDOW_SHOWN);
   if(ecran == NULL)
   {
       fprintf(stderr,  "Erreur window(ecran): %s\n", SDL_GetError());
       return EXIT_FAILURE;
   }
   SDL_SetWindowIcon(ecran, SDL_LoadBMP("sdl_icone.bmp"));
   
   rendu = SDL_CreateRenderer(ecran, -1, SDL_RENDERER_ACCELERATED);
   if(rendu == NULL)
   {
       fprintf(stderr,  "Erreur Renderer(main): %s\n", SDL_GetError());
       return EXIT_FAILURE;
   }
   
   surface = IMG_Load("1062_Fresh.jpg");
   if(surface == NULL)
   {
       fprintf(stderr,  "Erreur surface: %s\n", SDL_GetError());
       return EXIT_FAILURE;
   }
   texture = SDL_CreateTextureFromSurface(rendu,  surface);
   if(texture == NULL)
   {
       fprintf(stderr,  "Erreur texture: %s\n", SDL_GetError());
       return EXIT_FAILURE;
   }
   SDL_FreeSurface(surface);
   
   SDL_Rect posiEcrie, titre, lim;
   SDL_Color noir={0, 0, 0, 0}, blanc={255, 255, 255, 0};
   SDL_Color rouge={255, 0, 0, 0}, bleu={0, 0, 150, 0};
   
   int Encore = 1;
   SDL_Event event;
   while(Encore)
   {
      SDL_WaitEvent(&event);
      if(event.type == SDL_QUIT)
      {  
          Encore = 0;
      }
      
      Uint32 bouton;
      int x, y;
      bouton = SDL_GetMouseState(&x, &y);
      if(x>300 && x<700 && y>90 && y<135)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 90; lim.w = 400; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         { 
              SDL_SetRenderDrawColor(rendu, 250, 250, 250, 250);
              SDL_RenderClear(rendu);
       
              TraitementListeChainee(rendu);
              goto fin;
         }      
      }
      else if(x>300 && x<700 && y>135 && y<180)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 135; lim.w = 400; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
            SDL_RenderClear(rendu);
            SDL_SetRenderDrawColor(rendu, 0, 0, 0, 255);
            SDL_RenderDrawLine(rendu, 200, 0, 200, 500);
            SDL_RenderDrawLine(rendu, 200, 100, 1000, 100);
            SDL_RenderDrawLine(rendu, 200, 400, 1000, 400);
            TraitementListeDoublementChainee(rendu); 
            goto fin;
         }  
      }
      else if(x>300 && x<400 && y>180 && y<225)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 180; lim.w = 100; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
             TraitementPile(rendu);
             goto fin;
         }
      }
      else if(x>300 && x<400 && y>225 && y<270)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 225; lim.w = 100; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
            TraitementFile(rendu);
            goto fin;
         }
      }
      else if(x>300 && x<550 && y>270 && y<315)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 270; lim.w = 250; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
              ArbreBinaire(rendu);
              goto fin;
         }
      }
      else if(x>300 && x<700 && y>315 && y<360)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 315; lim.w = 400; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
            ArbreBinaireRecherche(rendu);
            goto fin;
         }
      }
      if(x>300 && x<440 && y>360 && y<405)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 360; lim.w = 120; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
            B_Tree(rendu);
            goto fin;
         }
      }
      else if(x>300 && x<600 && y>405 && y<450)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 405; lim.w = 300; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
         {
            TableHachage(rendu);
            goto fin;
         }
      }
      else if(x>300 && x<440 && y>440 && y<495)
      {
         //Affichage de rectangle de limite
         lim.x = 300; lim.y = 440; lim.w = 140; lim.h = 45;
         SDL_SetRenderDrawColor(rendu, 0, 0, 250, 250);
         SDL_RenderDrawRect(rendu, &lim);
         SDL_RenderPresent(rendu);
         
         if(bouton == SDL_BUTTON(SDL_BUTTON_LEFT))
            Encore = 0;
      }
      fin:
      //SDL_SetRenderDrawColor(rendu, 250, 250, 250, 250);
      SDL_RenderCopy(rendu, texture, NULL,NULL);
      
      titre.x = 350; titre.y = 0;
      EcrireText(rendu,  "DDS-VT", titre, bleu, 100);
      
      posiEcrie.x = 320; posiEcrie.y = 90;   
      EcrireTextDirect(rendu,  "Liste simplement chainee", posiEcrie, noir, 30);  
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "Liste doublement chainee", posiEcrie, noir, 30);
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "Pile", posiEcrie, noir, 30);
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "File", posiEcrie, noir, 30);
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "Arbre binaire", posiEcrie, noir, 30);
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "Arbre binaire de recherche", posiEcrie, noir, 30);
      posiEcrie.y += 45;      
      EcrireTextDirect(rendu,  "B-Tree", posiEcrie, noir, 30);
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "Table de hachage", posiEcrie, noir, 30);
      posiEcrie.y += 45;   
      EcrireTextDirect(rendu,  "Quitter", posiEcrie, noir, 30);
   
      SDL_RenderPresent(rendu);
   }
   SDL_DestroyTexture(texture);
   SDL_DestroyRenderer(rendu);
   SDL_DestroyWindow(ecran);
   SDL_Quit();
   return EXIT_SUCCESS;
}