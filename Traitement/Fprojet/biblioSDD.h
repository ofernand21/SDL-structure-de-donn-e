typedef int TypeDonnee;

void  ViderBuffer();
long Lecture();

/*🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️  Liste  🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️*/

typedef struct cell
{
	TypeDonnee donnee;
	struct cell *suivant;
}TypeCellule;

//Insere en tete de liste
TypeCellule *InsereEnTete(TypeCellule *ancienL, TypeDonnee donnee);

//Insere en queue de liste
TypeCellule *InsereEnQueue(TypeCellule *ancienL, TypeDonnee donnee);

//Supprimer un element
TypeCellule *SupprimerCelluleTete(TypeCellule *L);

//Supprimer l'élément de queue
TypeCellule *SupprimerCelluleQueue(TypeCellule *L);

//Fonction qui supprime une occurence
TypeCellule *SupprimeOccurence(TypeCellule *L, TypeDonnee donnee);

TypeCellule *SupprimeTouteOccurence(TypeCellule *L,TypeDonnee donnee);

//Rechercher un element
int RechercheElement(TypeCellule *L,int n);

//Affichage de liste
void AfficheListe(TypeCellule *L);

//Detruire la liste
void DetruireListe(TypeCellule **L);



/*🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️  PILE  🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️*/

typedef TypeCellule Pile;

//Initialiser
Pile *Initialiser();

//EstVide
int EstVide(Pile *P);

//EstPleine
int EstPleine(Pile *P);

//AccederSmmet
int AccederSommet(Pile *P,TypeDonnee *elt);

//Empiler
Pile *Empiler(Pile *P,TypeDonnee elt);

//DEpiler
int Depiler(Pile **P,TypeDonnee *elt);

//detruire
void Detruire(Pile **P);

//vider
void Vider(Pile **P);



/*🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️  FILE  🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️*/

typedef struct
{
	TypeCellule *Tete, *Queue;
}File;

//Initialisation
File InitialiserF();

//EstPleine
int EstPleineF(File F);

//EstVide
int EstVideF(File F);

//AccederTete
int AccederTeteF(File F,TypeDonnee *donnee);

//Enfiler
File EnfilerF(File *F, TypeDonnee elt);

int DefilerF(File *F,TypeDonnee *elt);

//Detruire
void DetruireF(File *F);

//vider
void ViderF(File *F);


/*🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️  LISTE DOUBLEMENT CHAÎNEE  🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️🇧🇫️*/

typedef struct cell2
{
	TypeDonnee donnee;
	struct cell2 *precedent, *suivant;
}TypeCelluleDouble;

//Insertion en tête de liste
TypeCelluleDouble *InsereEnTeteDouble(TypeCelluleDouble *L, TypeDonnee donnee);

//Insertion en queue de liste
TypeCelluleDouble *InsereEnQueueDouble(TypeCelluleDouble *L, TypeDonnee donnee);

//Suppression d'une occurence
TypeCelluleDouble *SupprimeOccurenceDouble(TypeCelluleDouble *L, TypeDonnee donnee);

//Suppression de toute occurence
TypeCelluleDouble *SupprimeTouteOccurenceDouble(TypeCelluleDouble *L, TypeDonnee donnee);

//Afficher la liste
void AfficheListeDouble(TypeCelluleDouble *L);
