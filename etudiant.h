#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__	

typedef struct etudiant
{
	char nom[20];
	char matricule[8];
	char sexe[2];
	int age ;
	float moyenne;
}etudiant_t;

etudiant_t* cree_tabEtudiant(int n);

etudiant_t* stock_etudiant(int n,etudiant_t* T);

void affiche_etudiant(int n,etudiant_t *T);

etudiant_t recherche_etudiant(int n,etudiant_t *T,int matricule);

etudiant_t* tri_bitonique(etudiant_t* T,int n);


#endif
