//Travail de Fernand Ouedraogo et Farida Savadogo pour le compte du projet

//Dernière modification: 30 septembre 2021

//🌍️🌍️ Les protypes des fonctions de traitement de DDS_VT

typedef struct
{
     char nom[50];
     int age;
}TypeInfo;

typedef TypeInfo Information;

typedef struct
{
    SDL_Rect rect1,rect2;
    SDL_Point point[5];
    int val;
}TypeCelluleView;

typedef struct
{
    SDL_Rect rect1,rect2,rect3;
    SDL_Point point[5];
    int val;
}TypeCelluleViewD;

void TraitementListeChainee(SDL_Renderer* rendu);

void TraitementPile(SDL_Renderer* rendu);

void TraitementFile(SDL_Renderer* rendu);

void TraitementListeDoublementChainee(SDL_Renderer *rendu);

void ArbreBinaire(SDL_Renderer *rendu);

void ArbreBinaireRecherche(SDL_Renderer *rendu);

void TableHachage(SDL_Renderer *rendu);

void B_Tree(SDL_Renderer *rendu);
