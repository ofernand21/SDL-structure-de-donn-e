//Travail de Fernand Ouedraogo et Farida Savadogo pour le compte du projet

//Dernière modification: 26 Septembre 2021

//🌍️🌍️ Les prototypes des fonctions de DDS_VT

void Scanf(SDL_Renderer *renderer,SDL_Rect rect,SDL_Rect vu);

void Scanf2(SDL_Renderer *renderer,SDL_Rect rect,SDL_Rect vu,char c[]);

void Scanf3(SDL_Renderer *renderer,SDL_Rect vu,char c[]);

void InsereEnTeteView(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Point point[],int i);

void InsereEnQueueView(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Point point[],int i);

void Supprimer(SDL_Renderer *renderer,SDL_Rect r1);

void EcrireText(SDL_Renderer *renderer,char text[],SDL_Rect dist,SDL_Color color,int TaillePolice);

void EcrireTextDirect(SDL_Renderer *renderer,char text[],SDL_Rect dist,SDL_Color color,int TaillePolice);

void InsereEnTeteViewD(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Rect r3,SDL_Point point[]);

void InsereEnQueueViewD(SDL_Renderer *renderer,SDL_Rect r1,SDL_Rect r2,SDL_Rect r3,SDL_Point point[]);

void InsereNoeudGauche(SDL_Renderer *renderer,SDL_Rect rect1,SDL_Rect rect2,SDL_Rect rect3,SDL_Point point[]);

void InsereNoeudDroit(SDL_Renderer *renderer,SDL_Rect rect1,SDL_Rect rect2,SDL_Rect rect3,SDL_Point point[]);

void Fscanf(SDL_Renderer *renderer,SDL_Rect vu,char c[]);

int Hachage(char chaine[]);

int VraiTaille(int tab[]);

void InsereCleDroit(SDL_Renderer *renderer,SDL_Rect rect,SDL_Point point[]);
