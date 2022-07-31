#include"etudiant.h"
#include<stdio.h>
#include<stdlib.h>


int main(void){
	int sug,v_fin=3;
	int n;
	etudiant_t *T = (etudiant_t*)malloc(sizeof(etudiant_t)*n);
	free (T);
	while( v_fin != 0){
		printf(" *******************voicie notre gestion d'etudiant****************** \n  vous pouvez\n   \n1-enregistrer tous les etudiants \n 2-trier une structure de donnee   \n 3-rechercher un etudiant \n 4-afficher la structure de donnee \n   choissisez ce que vous voulez faire: ");
		scanf("%d",&sug);
		while( sug < 1 && sug > 5){
			printf("  vous pouvez\n  \n1-enregistrer tous les etudiants \n 2-trier une structure de donnees  \n 3-rechercher un etudiant \n 4-afficher la structure de donnee \n   choissisez ce que vous voulez faire: ");
			scanf("%d",&sug);
		}
		
		if(sug == 1 ){
			printf("entrer le nombre d'etudiant ");
			scanf("%d",&n);
			T = cree_tabEtudiant(n);
			T = stock_etudiant(n,T);
			affiche_etudiant(n,T);
			printf("voulez vous continuer 1-oui 0-non ");
			scanf("%d",&v_fin);
		}
		if(sug == 2 ){
				printf("tri par insertion par rapport au matricule de votre structure de donnee sur les etudiants\n");
				T =  tri_bitonique(T,n);
				affiche_etudiant(n,T);
			printf("voulez vous continuer 1-oui 0-non ");
			scanf("%d",&v_fin);
		}
		if(sug == 3 ){
			int age;
			printf("entrer l'age a rechercher ");
			scanf("%d",&age);
			etudiant_t t;
			 t = recherche_etudiant(n,T,age);
			 	printf("%s \t\t",t.nom);
				printf("%s \t\t",t.matricule);
				printf("%s \t",t.sexe);
				printf("%d \t",t.age);
				printf("%f \n\n",t.moyenne);
			printf("voulez vous continuer 1-oui 0-non ");
			scanf("%d",&v_fin);
		}
		if( sug == 4 ){
			affiche_etudiant(n,T);
		}
		sug=0;
	}
	return 0;
}
