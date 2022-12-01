//Travail de Fernand Ouedraogo et Farida Savadogo pour le compte du projet

//Dernière modification: 1er Octobre 2021

//🌍️🌍️ Les fonction de DDS_VT

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#include "fonction.h"


//🌍️🌍️ Fonction de saisi
void Scanf(SDL_Renderer *renderer,SDL_Rect rect,SDL_Rect vu)
{
    char c[10]={'\0'};
    SDL_Color noir={0,0,0,255};
    int continuer = 1,i=0;
    SDL_Event event;
    
    while(continuer == 1)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_KEYDOWN:
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_0:
                    {
                        EcrireTextDirect(renderer,"0",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='0';
                        i++;
                    }break;
                    case SDLK_1:
                    {
                        EcrireTextDirect(renderer,"1",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='1';
                        i++;
                    }break;
                    case SDLK_2:
                    {
                        EcrireTextDirect(renderer,"2",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='2';
                        i++;
                    }break;
                    case SDLK_3:
                    {
                        EcrireTextDirect(renderer,"3",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='3';
                        i++;
                    }break;
                    case SDLK_4:
                    {
                        EcrireTextDirect(renderer,"4",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='4';
                        i++;
                    }break;
                    case SDLK_5:
                    {
                        EcrireTextDirect(renderer,"5",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='5';
                        i++;
                    }break;
                    case SDLK_6:
                    {
                        EcrireTextDirect(renderer,"6",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='6';
                        i++;
                    }break;
                    case SDLK_7:
                    {
                        EcrireTextDirect(renderer,"7",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='7';
                        i++;
                    }break;
                    case SDLK_8:
                    {
                        EcrireTextDirect(renderer,"8",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='8';
                        i++;
                    }break;
                    case SDLK_9:
                    {
                        EcrireTextDirect(renderer,"9",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='9';
                        i++;
                    }break;
                    case SDLK_BACKSPACE:
                    {
                        SDL_Rect eff={vu.x-10,vu.y,10,25};
                        SDL_SetRenderDrawColor(renderer,255,255,255,255);
                        SDL_RenderFillRect(renderer,&eff);
                        SDL_SetRenderDrawColor(renderer,0,0,0,255);
                        vu.x-=10;
                        SDL_RenderPresent(renderer);
                        i--;
                        c[i]='\0';
                    }break;
                    case SDLK_RETURN:
                        continuer = 0;break;
                }
             }break;
          }
       }
       EcrireTextDirect(renderer,c,rect,noir,20);
}

//🌍️🌍️ Fonction de saisi
void Scanf2(SDL_Renderer *renderer,SDL_Rect rect,SDL_Rect vu,char c[])
{
    SDL_Color noir={0,0,0,255};
    int continuer = 1,i=0;
    SDL_Event event;
    
    while(continuer == 1)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_KEYDOWN:
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_0:
                    {
                        EcrireTextDirect(renderer,"0",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='0';
                        i++;
                    }break;
                    case SDLK_1:
                    {
                        EcrireTextDirect(renderer,"1",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='1';
                        i++;
                    }break;
                    case SDLK_2:
                    {
                        EcrireTextDirect(renderer,"2",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='2';
                        i++;
                    }break;
                    case SDLK_3:
                    {
                        EcrireTextDirect(renderer,"3",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='3';
                        i++;
                    }break;
                    case SDLK_4:
                    {
                        EcrireTextDirect(renderer,"4",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='4';
                        i++;
                    }break;
                    case SDLK_5:
                    {
                        EcrireTextDirect(renderer,"5",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='5';
                        i++;
                    }break;
                    case SDLK_6:
                    {
                        EcrireTextDirect(renderer,"6",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='6';
                        i++;
                    }break;
                    case SDLK_7:
                    {
                        EcrireTextDirect(renderer,"7",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='7';
                        i++;
                    }break;
                    case SDLK_8:
                    {
                        EcrireTextDirect(renderer,"8",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='8';
                        i++;
                    }break;
                    case SDLK_9:
                    {
                        EcrireTextDirect(renderer,"9",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='9';
                        i++;
                    }break;
                    case SDLK_BACKSPACE:
                    {
                        SDL_Rect eff={vu.x-10,vu.y,10,25};
                        SDL_SetRenderDrawColor(renderer,255,255,255,255);
                        SDL_RenderFillRect(renderer,&eff);
                        SDL_SetRenderDrawColor(renderer,0,0,0,255);
                        vu.x-=10;
                        SDL_RenderPresent(renderer);
                        i--;
                        c[i]='\0';
                    }break;
                    case SDLK_RETURN:
                        continuer = 0;break;
                }
             }break;
          }
       }
       EcrireTextDirect(renderer,c,rect,noir,20);
}

//🌍️🌍️ Fonction pour ecrire du text 🌍️🌍️
void EcrireText(SDL_Renderer *renderer,char text[],SDL_Rect dist,SDL_Color color,int TaillePolice)
{
   TTF_Init(); // Charger SDL_ttf
   SDL_Texture *tmp = NULL;
   SDL_Surface *s = NULL;
   TTF_Font *font = NULL;
   
   font = TTF_OpenFont("KGDefyingGravity.ttf",TaillePolice); //Charger la police 
   s = TTF_RenderText_Blended(font,text,color); //faire une surface avec le font et le text
                  
   tmp = SDL_CreateTextureFromSurface(renderer,s);
   SDL_QueryTexture(tmp,NULL,NULL,&dist.w,&dist.h);
   SDL_FreeSurface(s); //On a plus besoin de la surface
   TTF_CloseFont(font); // On a plus besoin de la police
   SDL_RenderCopy(renderer,tmp,NULL,&dist);
   SDL_DestroyTexture(tmp); //On a plus besoin de la texture
   TTF_Quit(); // Fermer SDL_ttf
}

//🌍️🌍️ Ecrire du text directement 
void EcrireTextDirect(SDL_Renderer *renderer,char text[],SDL_Rect dist,SDL_Color color,int TaillePolice)
{
   /* la seule difference avec la fonction précédente est qu'elle prend un contente char */
   TTF_Init();
   SDL_Texture *tmp = NULL;
   SDL_Surface *s = NULL;
   TTF_Font *font = NULL;
   
   font = TTF_OpenFont("Philosopher-Bold.ttf",TaillePolice);
   s = TTF_RenderText_Blended(font,text,color);
                  
   tmp = SDL_CreateTextureFromSurface(renderer,s);
   SDL_QueryTexture(tmp,NULL,NULL,&dist.w,&dist.h);
   SDL_FreeSurface(s);
   TTF_CloseFont(font);
   SDL_RenderCopy(renderer,tmp,NULL,&dist);
   SDL_DestroyTexture(tmp);
   TTF_Quit();
}

//Fonction voir si un point appartien à un rectangle 
int Appartient(SDL_Rect r,int x, int y)
{
   if(x > r.x && x < r.x + r.w && y > r.y && y < r.y + r.h)
       return 1;
   else 
       return 0;
}

//💛️💛️💛️💛️💛️💛️ Fonction de la liste simplement chainée, pile et file 💛️💛️💛️💛️

//🌍️🌍️ Fonction d'nsère en Tête 🌍️🌍️
void InsereEnTeteView(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Point point[],int i)
{
      if(r1.x > 0 && r1.y == 250)
      { 
           //Position de la flèche
            point[0].x=r1.x+90; point[0].y=r1.y+25;
            point[1].x=r1.x+120; point[1].y=r1.y+25;
            point[2].x=r1.x+115; point[2].y=r1.y+20;
            point[3].x=r1.x+120; point[3].y=r1.y+25;
            point[4].x=r1.x+115; point[4].y=r1.y+30;
           // On trace la cellule avant d'incrementé pour la prochaine
           SDL_RenderDrawRect(renderer,&r1);
           SDL_RenderDrawRect(renderer,&r2);
           SDL_RenderDrawLines(renderer,point,5);
      }
      else
      {    
            while(i==1109)
            {
                SDL_Rect p1={1210,350,20,50};
                SDL_Point p[5];
                p[0].x=i+100; p[0].y=375;
                p[1].x=i+120; p[1].y=375;
                p[2].x=i+115; p[2].y=370;
                p[3].x=i+120; p[3].y=375;
                p[4].x=i+115; p[4].y=380;
               //flèche blanche pour effacer la precedente
                SDL_SetRenderDrawColor(renderer,250,250,250,250);
                SDL_RenderDrawLines(renderer,p,5);
                SDL_RenderFillRect(renderer,&p1);
                SDL_SetRenderDrawColor(renderer,0,0,0,250);
                //flèche de transition
                point[0].x=i+101; point[0].y=375;
                point[1].x=r1.x+120; point[1].y=r1.y+25;
                point[2].x=r1.x+115; point[2].y=r1.y+20;
                point[3].x=r1.x+120; point[3].y=r1.y+25;
                point[4].x=r1.x+115; point[4].y=r1.y+30;
                SDL_RenderDrawLines(renderer,point,5);
                i=1110;
            }
            
            r1.x =i; r2.x=i+80; r1.y=350; r2.y=350;
            //Position de la flèche
            point[0].x=r1.x+90; point[0].y=r1.y+25;
            point[1].x=r1.x+120; point[1].y=r1.y+25;
            point[2].x=r1.x+115; point[2].y=r1.y+20;
            point[3].x=r1.x+120; point[3].y=r1.y+25;
            point[4].x=r1.x+115; point[4].y=r1.y+30;
            // On trace la cellule avant d'incrementé pour la prochaine
            SDL_RenderDrawRect(renderer,&r1);
            SDL_RenderDrawRect(renderer,&r2);
            if(i != 1110)
                SDL_RenderDrawLines(renderer,point,5);
      }
}

//🌍️🌍️ Fonction d'nsère en Queue 🌍️🌍️
void InsereEnQueueView(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Point point[],int i)
{
      if(r1.x+100 < 1300 && r1.y == 250)
      {
            //Position de la flèche
            point[0].x=r1.x+90; point[0].y=r1.y+25;
            point[1].x=r1.x+120; point[1].y=r1.y+25;
            point[2].x=r1.x+115; point[2].y=r1.y+20;
            point[3].x=r1.x+120; point[3].y=r1.y+25;
            point[4].x=r1.x+115; point[4].y=r1.y+30;
            // On trace la cellule avant d'incrementé pour la prochaine
            SDL_RenderDrawRect(renderer,&r1);
            SDL_RenderDrawRect(renderer,&r2);
            SDL_RenderDrawLines(renderer,point,5);
      }
      else
      {    
            while(i==9)
            {
                SDL_Rect p1={r1.x+90,250,20,50};
                //flèche blanche pour effacer la precedente
                SDL_SetRenderDrawColor(renderer,250,250,250,250);
                SDL_RenderDrawLines(renderer,point,5);
                SDL_RenderFillRect(renderer,&p1);
                SDL_SetRenderDrawColor(renderer,0,0,0,250);
                //flèche de transition
                point[0].x=r1.x-30; point[0].y=275;
                point[1].x=10; point[1].y=375;
                point[2].x=5; point[2].y=370;
                point[3].x=10; point[3].y=375;
                point[4].x=5; point[4].y=380;
                SDL_RenderDrawLines(renderer,point,5);
                i=10;
            }
            
            r1.x =i; r2.x=i+80; r1.y=350; r2.y=350;
            //Position de la flèche
            point[0].x=r1.x+100; point[0].y=r1.y+25;
            point[1].x=r1.x+120; point[1].y=r1.y+25;
            point[2].x=r1.x+115; point[2].y=r1.y+20;
            point[3].x=r1.x+120; point[3].y=r1.y+25;
            point[4].x=r1.x+115; point[4].y=r1.y+30;
            // On trace la cellule avant d'incrementé pour la prochaine
            SDL_RenderDrawRect(renderer,&r1);
            SDL_RenderDrawRect(renderer,&r2);
            SDL_RenderDrawLines(renderer,point,5);
      }   
}
//🌍️🌍️ Fonction de suppression
void Supprimer(SDL_Renderer *renderer,SDL_Rect r1)
{    
    // On trace la cellule mais en blanc (la couleur de fond)
    SDL_SetRenderDrawColor(renderer,250,250,250,250);
    SDL_RenderFillRect(renderer,&r1);
    //on remet en noir pour la suite
    SDL_SetRenderDrawColor(renderer,0,0,0,250);
}

//💛️💛️💛️💛️💛️💛️ Fonction de la liste doublement chainée 💛️💛️💛️💛️💛️💛️

//🌍️🌍️ Fonction d'insère en tête
void InsereEnTeteViewD(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Rect r3,SDL_Point point[])
{
    // On trace la cellule avant d'incrementé pour la prochaine
    SDL_RenderDrawRect(renderer,&r1);
    SDL_RenderDrawRect(renderer,&r2);
    SDL_RenderDrawRect(renderer,&r3);
    SDL_RenderDrawLines(renderer,point,5);
    //r1.x+=120; r2.x+=120;
    for(int i=0; i<5; i++)
    {
        point[i].x+=120;
    }
}

//🌍️🌍️ Fonction d'insère en tête
void InsereEnQueueViewD(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Rect r3,SDL_Point point[])
{
    // On trace la cellule avant d'incrementé pour la prochaine
    SDL_RenderDrawRect(renderer,&r1);
    SDL_RenderDrawRect(renderer,&r2);
    SDL_RenderDrawRect(renderer,&r3);
    SDL_RenderDrawLines(renderer,point,5);
    //r1.x+=120; r2.x+=120;
    for(int i=0; i<5; i++)
    {
        point[i].x-=120; 
    }
}


//🌍️🌍️ Fonction de saisi Ameliorer
void Scanf3(SDL_Renderer *renderer,SDL_Rect vu,char c[])
{
    SDL_Color noir={0,0,0,255};
    
    int continuer = 1,i=0;
    SDL_Event event;
    
    while(continuer == 1)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_KEYDOWN:
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_0:
                    {
                        EcrireTextDirect(renderer,"0",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='0';
                    }break;
                    case SDLK_1:
                    {
                        EcrireTextDirect(renderer,"1",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='1';
                        i++;
                    }break;
                    case SDLK_2:
                    {
                        EcrireTextDirect(renderer,"2",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='2';
                        i++;
                    }break;
                    case SDLK_3:
                    {
                        EcrireTextDirect(renderer,"3",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='3';
                        i++;
                    }break;
                    case SDLK_4:
                    {
                        EcrireTextDirect(renderer,"4",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='4';
                        i++;
                    }break;
                    case SDLK_5:
                    {
                        EcrireTextDirect(renderer,"5",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='5';
                        i++;
                    }break;
                    case SDLK_6:
                    {
                        EcrireTextDirect(renderer,"6",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='6';
                        i++;
                    }break;
                    case SDLK_7:
                    {
                        EcrireTextDirect(renderer,"7",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='7';
                        i++;
                    }break;
                    case SDLK_8:
                    {
                        EcrireTextDirect(renderer,"8",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='8';
                        i++;
                    }break;
                    case SDLK_9:
                    {
                        EcrireTextDirect(renderer,"9",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='9';
                        i++;
                    }break;
                    case SDLK_RETURN:
                    {
                        if(i == 0)
                            c[i]='0';
                        continuer = 0;
                    }break;
                }
             }break;
          }
       }
}

//Fonction d'insertion de noeuds gauche
void InsereNoeudGauche(SDL_Renderer *renderer,SDL_Rect rect1,SDL_Rect rect2,SDL_Rect rect3,SDL_Point point[])
{
       //Destination de la flèche
       point[1].x=rect1.x+20; point[1].y=rect1.y;
       point[2].x=rect1.x+15; point[2].y=rect1.y-5;
       point[3].x=rect1.x+20; point[3].y=rect1.y;
       point[4].x=rect1.x+25; point[4].y=rect1.y-5;
       
       SDL_RenderDrawRect(renderer,&rect1);
       SDL_RenderDrawRect(renderer,&rect2);
       SDL_RenderDrawRect(renderer,&rect3);
       SDL_RenderDrawLines(renderer,point,5);
}

//Fonction d'insertion de noeuds droit
void InsereNoeudDroit(SDL_Renderer *renderer,SDL_Rect rect1,SDL_Rect rect2,SDL_Rect rect3,SDL_Point point[])
{
       //Destination de la flèche
       point[1].x=rect1.x+20; point[1].y=rect1.y;
       point[2].x=rect1.x+15; point[2].y=rect1.y-5;
       point[3].x=rect1.x+20; point[3].y=rect1.y;
       point[4].x=rect1.x+25; point[4].y=rect1.y-5;
       
       SDL_RenderDrawRect(renderer,&rect1);
       SDL_RenderDrawRect(renderer,&rect2);
       SDL_RenderDrawRect(renderer,&rect3);
       SDL_RenderDrawLines(renderer,point,5);
}


//🌍️🌍️ Fonction de saisi (lettres y compris) ♥️💙️🧡️💜️♥️💙️🧡️💜️♥️💙️🧡️💜️♥️💙️🧡️💜️♥️💙️🧡️💜️♥️💙️🧡️💜️
void Fscanf(SDL_Renderer *renderer,SDL_Rect vu,char c[])
{
    SDL_Color noir={0,0,0,255},blanc={255,255,255,255};

    int continuer = 1,i=0;
    SDL_Event event;
    
    while(continuer == 1)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_KEYDOWN:
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_0:
                    {
                        EcrireTextDirect(renderer,"0",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='0';
                        i++;
                    }break;
                    case SDLK_1:
                    {
                        EcrireTextDirect(renderer,"1",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='1';
                        i++;
                    }break;
                    case SDLK_2:
                    {
                        EcrireTextDirect(renderer,"2",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='2';
                        i++;
                    }break;
                    case SDLK_3:
                    {
                        EcrireTextDirect(renderer,"3",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='3';
                        i++;
                    }break;
                    case SDLK_4:
                    {
                        EcrireTextDirect(renderer,"4",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='4';
                        i++;
                    }break;
                    case SDLK_5:
                    {
                        EcrireTextDirect(renderer,"5",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='5';
                        i++;
                    }break;
                    case SDLK_6:
                    {
                        EcrireTextDirect(renderer,"6",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='6';
                        i++;
                    }break;
                    case SDLK_7:
                    {
                        EcrireTextDirect(renderer,"7",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='7';
                        i++;
                    }break;
                    case SDLK_8:
                    {
                        EcrireTextDirect(renderer,"8",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='8';
                        i++;
                    }break;
                    case SDLK_9:
                    {
                        EcrireTextDirect(renderer,"9",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='9';
                        i++;
                    }break;
                    case SDLK_a:
                    {
                        EcrireTextDirect(renderer,"a",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='a';
                        i++;
                    }break;
                    case SDLK_b:
                    {
                        EcrireTextDirect(renderer,"b",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='b';
                        i++;
                    }break;
                    case SDLK_c:
                    {
                        EcrireTextDirect(renderer,"c",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='c';
                        i++;
                    }break;
                    case SDLK_d:
                    {
                        EcrireTextDirect(renderer,"d",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='d';
                        i++;
                    }break;
                    case SDLK_e:
                    {
                        EcrireTextDirect(renderer,"e",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='e';
                        i++;
                    }break;
                    case SDLK_f:
                    {
                        EcrireTextDirect(renderer,"f",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='f';
                        i++;
                    }break;
                    case SDLK_g:
                    {
                        EcrireTextDirect(renderer,"g",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='g';
                        i++;
                    }break;
                    case SDLK_h:
                    {
                        EcrireTextDirect(renderer,"h",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='h';
                        i++;
                    }break;
                    case SDLK_i:
                    {
                        EcrireTextDirect(renderer,"i",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='i';
                        i++;
                    }break;
                    case SDLK_j:
                    {
                        EcrireTextDirect(renderer,"j",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='j';
                        i++;
                    }break;
                    case SDLK_k:
                    {
                        EcrireTextDirect(renderer,"k",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='k';
                        i++;
                    }break;
                    case SDLK_l:
                    {
                        EcrireTextDirect(renderer,"l",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='l';
                        i++;
                    }break;
                    case SDLK_m:
                    {
                        EcrireTextDirect(renderer,"m",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='m';
                        i++;
                    }break;
                    case SDLK_n:
                    {
                        EcrireTextDirect(renderer,"n",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='n';
                        i++;
                    }break;
                    case SDLK_o:
                    {
                        EcrireTextDirect(renderer,"o",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='o';
                        i++;
                    }break;
                    case SDLK_p:
                    {
                        EcrireTextDirect(renderer,"p",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='p';
                        i++;
                    }break;
                    case SDLK_q:
                    {
                        EcrireTextDirect(renderer,"q",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='q';
                        i++;
                    }break;
                    case SDLK_r:
                    {
                        EcrireTextDirect(renderer,"r",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='r';
                        i++;
                    }break;
                    case SDLK_s:
                    {
                        EcrireTextDirect(renderer,"s",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='s';
                        i++;
                    }break;
                    case SDLK_t:
                    {
                        EcrireTextDirect(renderer,"t",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='t';
                        i++;
                    }break;
                    case SDLK_u:
                    {
                        EcrireTextDirect(renderer,"u",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='u';
                        i++;
                    }break;
                    case SDLK_v:
                    {
                        EcrireTextDirect(renderer,"v",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='v';
                        i++;
                    }break;
                    case SDLK_w:
                    {
                        EcrireTextDirect(renderer,"w",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='w';
                        i++;
                    }break;
                    case SDLK_x:
                    {
                        EcrireTextDirect(renderer,"x",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='x';
                        i++;
                    }break;
                    case SDLK_y:
                    {
                        EcrireTextDirect(renderer,"y",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='y';
                        i++;
                    }break;
                    case SDLK_z:
                    {
                        EcrireTextDirect(renderer,"z",vu,noir,20);
                        vu.x+=10;
                        SDL_RenderPresent(renderer);
                        c[i]='z';
                        i++;
                    }break;
                    case SDLK_BACKSPACE:
                    {
                        SDL_Rect eff={vu.x-10,vu.y,10,30};
                        SDL_SetRenderDrawColor(renderer,255,255,255,255);
                        SDL_RenderFillRect(renderer,&eff);
                        SDL_SetRenderDrawColor(renderer,0,0,0,255);
                        vu.x-=10;
                        SDL_RenderPresent(renderer);
                        i--;
                        c[i]='\0';
                    }break;
                    case SDLK_RETURN:
                        continuer = 0;break;
                }
             }break;
          }
       }
}

//Fonction de hachage
int Hachage(char chaine[])
{
    int i = 0, nombreHache = 0;

    for (i = 0 ; chaine[i] != '\0' ; i++)
    {
        nombreHache += chaine[i];
    }
    nombreHache %= 100;

    return nombreHache;
}

//Recherche de taille vrai d'un tableau
int VraiTaille(int tab[])
{
      int vrai = 0;
      for(int i=0; i<100; i++)
      {
            if(tab[i] == -1)
            {
                 vrai = i; break;
            }
     }
     return vrai;
}

//Fonction d'insertion de noeuds droit
void InsereCleDroit(SDL_Renderer *renderer,SDL_Rect rect,SDL_Point point[])
{
       //Destination de la flèche
       point[1].x=rect.x+20; point[1].y=rect.y;
       point[2].x=rect.x+15; point[2].y=rect.y-5;
       point[3].x=rect.x+20; point[3].y=rect.y;
       point[4].x=rect.x+25; point[4].y=rect.y-5;
       
       SDL_RenderDrawRect(renderer,&rect);
       SDL_RenderDrawLines(renderer,point,5);
}
