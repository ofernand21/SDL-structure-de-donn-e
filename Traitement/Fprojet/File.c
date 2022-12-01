#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define couleur(param) printf("\033[%sm",param)

//Initialisation
File InitialiserF()
{
	File filevide;
 	filevide.Tete = NULL;
 	return filevide;
}

//EstPleine
int EstPleineF(File F)
{
	return 0;
}

//EstVide
int EstVideF(File F)
{
	return (F.Tete == NULL) ? 1 : 0;
}

//AccederTete
int AccederTete(File F,TypeDonnee *donnee)
{
	if(F.Tete== NULL)
		return 1;
	else
	{
		*donnee=F.Tete->donnee;
		return 0;
	}
}

//Enfiler
void Enfiler(File *F, TypeDonnee elt)
{
	TypeCellule *p;
	p=(TypeCellule*)malloc(sizeof(TypeCellule));
	p->donnee=elt;
	p->suivant=NULL;
   	if(EstVideF(*F))
		F->Tete=F->Queue=p;
	else
	{
		F->Queue->suivant=p;
		F->Queue=p;
	}
}

int Defiler(File *F,TypeDonnee *elt)
{
	TypeCellule *q;
	if(EstVideF(*F))
		return 1;
	*elt=F->Tete->donnee;
	q=F->Tete;
	F->Tete=F->Tete->suivant;
	free(q);
	return 0;
}

//Detruire
void DetruireF(File *F)
{
	TypeCellule *p, *q;
	p = F->Tete;
	while(p != NULL);
	{
		q = p;
		p = p->suivant;
		free(q);
	}
	F->Tete = NULL;
}

//vider
void ViderF(File *F)
{
	DetruireF(F);
	F->Tete=NULL;
}
