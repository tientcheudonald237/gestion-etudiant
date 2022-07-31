#include"etudiant.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


etudiant_t* cree_tabEtudiant(int n){
	etudiant_t *T = (etudiant_t*)malloc(sizeof(etudiant_t)*n);
	return T ;
}



etudiant_t* stock_etudiant(int n,etudiant_t* T){
	int i;
	for(i=0;i<n;i++){
		printf("entrer le nom %d:",i+1);
		scanf("%s",T[i].nom);
		printf("entrer le matricule %d:",i+1);
		scanf("%s",T[i].matricule);
		printf("entrer le sexe  %d:",i+1);
		scanf("%s",T[i].sexe);
		printf("entrer l'age %d:",i+1);
		scanf("%d",&T[i].age);
		printf("entrer la moyenne %d:",i+1);
		scanf("%f",&T[i].moyenne);
	}
	return T;
}


void affiche_etudiant(int n,etudiant_t *T){
	int i ;
	printf(" \nnom\t\t matricule\t sexe\t age\t moyenne\n ");
	for(i=0;i<n;i++){
		printf(" %s \t\t",T[i].nom);
		printf("%s \t\t",T[i].matricule);
		printf("%s \t",T[i].sexe);
		printf("%d \t",T[i].age);
		printf("%f \n\n",T[i].moyenne);
	}
}


etudiant_t recherche_etudiant(int n,etudiant_t *T,int matricule){
	int i,j,ok=0;
	for(i=0;i<n;i++){
			if( T[i].age == matricule ){
				return T[i];
				ok=1;
			}
	}
	if(ok == 0)
			 printf(" le matricule que vous recherchez ne figure pas dans notre structure de donnee\n"); 
		
}

etudiant_t* tri_bitonique(etudiant_t* T,int n){
	int i,test;
	etudiant_t temp;
	do{
		test=0;
		for(i=0;i<=n-2;i+=2){
			if(strcmp(T[i].matricule,T[i+1].matricule)>0){ 
				temp=T[i];
				T[i]=T[i+1];
				T[i+1]=temp;
				test=1;
			}
		}
		for(i=1;i<=n-2;i+=2){
			if(strcmp(T[i].matricule,T[i+1].matricule)>0){
				temp=T[i];
				T[i]=T[i+1];
				T[i+1]=temp;
				test=1;
			}
		}	
	}while(test==1);
	return T;
}



	
	




	
