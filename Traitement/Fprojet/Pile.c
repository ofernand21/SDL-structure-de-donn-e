#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Initialiser
Pile *Initialiser()
{
	return NULL;
}

//EstVide
int EstVide(Pile *P)
{
	return (P == NULL) ? 1 : 0;
}

//EstPleine
int EstPleine(Pile *P)
{
	return 0;
}

//AccederSmmet
int AccederSommet(Pile *P,TypeDonnee *elt)
{
	if(P == NULL)
  	     return 1;
	else
	{
		*elt=P->donnee;
		return 0;
	}
}

//Empiler
Pile *Empiler(Pile *P,TypeDonnee elt)
{
	TypeCellule *q;
	q=(TypeCellule*)malloc(sizeof(TypeCellule));
	q->donnee=elt;
	q->suivant=P;
	return q;
}

//DEpiler
int Depiler(Pile **P,TypeDonnee *elt)
{
	TypeCellule *q;
	if(EstVide(*P))
		return 1;
	*elt = (*P)->donnee;
	q = *P;
	*P = (*P)->suivant;
	free(q);
	return 0;
}

//detruire
void Detruire(Pile **P)
{
	TypeCellule *q;
	while(*P != NULL)
	{
		q = *P;
		*P = (*P)->suivant;
		free(q);
	}
	*P=NULL;
}

//vider
void Vider(Pile **P)
{
	Detruire(P);
	*P=NULL;
}
