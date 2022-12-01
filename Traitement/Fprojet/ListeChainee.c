#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define couleur(param) printf("\033[%sm",param)


//Fonction se saisi
void  ViderBuffer() // PERMET DE VIDER LE BUFFER EN CAS DE DEPASSEMENT DE MEMOIRE
{
	long c;
	while (c != '\n' && c != EOF) c = getchar();
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
long Lecture() // RETOURNE -1 EN CAS D'ERREUR SINON LA VALEUR ENTIERE POSITIVE
{
	char Chaine[100];
	unsigned long Longueur, Valeur=0,i;

	fgets(Chaine,sizeof(Chaine),stdin); // PERMET D'ENTRER UNE CHAINE DE CARACTERE
	Longueur=strlen(Chaine); // PERMET DE DONNER LA LONGUEUR D'UNE CHAINE DE CARACTERE

	for (i=0;i<Longueur-1;i++)
	{
        // RESULTAT PREND -1 SI LE CARACTERE N'EST PAS UN CHIFFRE
		if (!isdigit(Chaine[i]))
		{
			Valeur=-1;
			break;
		}
	}

    //  CONVERTIR LE CARACTERE EN LONG S'IL EST UN NOMBRE
	if(Valeur!=-1)
	{
		Valeur=(long)strtol(Chaine, NULL,10); // PERMET DE CONVERTIR LA CHAINE DE CARACTERE EN  UN ENTIER
	}

	return Valeur;
}

//Insere en tete de liste
TypeCellule *InsereEnTete(TypeCellule *ancienL, TypeDonnee donnee)
{
	TypeCellule *NouveauL;
	NouveauL=(TypeCellule*)malloc(sizeof(TypeCellule));
	NouveauL->donnee=donnee;
	NouveauL->suivant=ancienL;
	return NouveauL;
}

//Insere en queue de liste
TypeCellule *InsereEnQueue(TypeCellule *ancienL, TypeDonnee donnee)
{
	TypeCellule *NouveauL,*p;
	NouveauL=(TypeCellule*)malloc(sizeof(TypeCellule));
	NouveauL->donnee=donnee;
	NouveauL->suivant=NULL;

	if(ancienL == NULL)
		ancienL=NouveauL;
	else
	{
		for(p=ancienL; p->suivant != NULL; p=p->suivant);
			p->suivant = NouveauL;
	}
	return ancienL;
}

//Supprimer l'element de tete
TypeCellule *SupprimerCelluleTete(TypeCellule *L)
{
	if(L != NULL)
	{
		TypeCellule *p;
		p = L;
		L = L->suivant;
		free(p);
	}
	return L;
}

//Supprimer l'élément de queue
TypeCellule *SupprimerCelluleQueue(TypeCellule *L)
{
	TypeCellule *p,*q;
	if(L->suivant == NULL || L == NULL)
		L = NULL;
	else
	{
		for(p = L; p->suivant->suivant != NULL; p = p->suivant);
		if(p->suivant->suivant == NULL)
		{
			q = p->suivant;
			p->suivant = NULL;
			free(q);
		}
	}
	return L;
}

//Fonction qui supprime une occurence
TypeCellule *SupprimeOccurence(TypeCellule *L, TypeDonnee donnee)
{
	TypeCellule *p, *q;
	if(L->donnee == donnee)
	{
		q = L;
		L = L->suivant;
		free(q);
	}
	else
	{
		for(p = L; p->suivant->donnee != donnee && p->suivant != NULL; p = p->suivant);
		if(p->suivant->donnee == donnee)
		{
			q = p->suivant;
			p->suivant = q->suivant;
			free(q);
		}
	}
	return L;
}

//Fonction qui supprime toute occurence
TypeCellule *SupprimeTouteOccurence(TypeCellule *L,TypeDonnee donnee)
{
	TypeCellule *p = L,*q,*sup;
	if(p != NULL)
	{
		if(p->donnee == donnee)
			L = L->suivant;
		while(p->suivant != NULL && p != NULL)
		{
			if(p->suivant->donnee == donnee)
			{
				sup=p->suivant;
				q=sup->suivant;
				p->suivant=q;
				free(sup);
				continue;
			}
			p=p->suivant;
		}
	}
	return L;
}

//Rechercher un element
int RechercheElement(TypeCellule *L,int n)
{
	int oui = 0;
	TypeCellule *p;
	for(p = L; p != NULL; p = p->suivant)
	{
		if(p->donnee == n)
		{
			oui = 1; break;
		}
	}
	return oui;
}

//Affichage de liste
void AfficheListe(TypeCellule *L)
{
	TypeCellule *p ;
	if(L == NULL)
	{
		couleur("1;32");
		printf("La liste est vide");
		couleur("0");
	}
	for(p=L; p != NULL; p=p->suivant)
	{
		couleur("1;32");
		printf("%10d",p->donnee);
		couleur("0");
	}
	printf("\n\n");
}

//Detruire la liste
void DetruireListe(TypeCellule **L)
{
	TypeCellule *q;
	while(*L != NULL)
	{
		q = *L;
		*L = (*L)->suivant;
		free(q);
	}
	*L = NULL;
}
