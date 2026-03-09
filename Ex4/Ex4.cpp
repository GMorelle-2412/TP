/*Question nº4
tab1 et tab2 sont des variables locales à main:
int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
int tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};
Ecrire une fonction de prototype void affiche(int *tab,int i,int j) qui permet 
d'afficher les i*j nombres suivant un tableau i x j(à l’affichage i lignes et j colonnes).
La mettre en oeuvre dans main() pour afficher tab1 et tab2.*/

#include<stdio.h>

void affiche(int* tab, int i, int j) {
	/*for (int a = 0; a < i; a++) {
		for (int b = 0; b < j; b++) {

		}
	}*/
	printf("");
}

int main() {
	/*Variable*/
	int ligne [2];
	int colonnes [2];


	/*tableau*/
	int tab1[] = { 
		0,1,2,3,
		4,5,6,7,
		8,9,10,11,
		12,13,14,15,
		16,17,18,19 
	};
	int tab2[] = { 
		-19,18,-17,16,
		-15,14,-13,12,
		-11,10,-9,8,
		-7,6,-5,4,
		-3,2,-1,0 
	};


	/*Saisie*/
	//Ligne tab1
	printf("Quelle ligne de tab1 : ");
	scanf_s("%d", &ligne[0]);

	//Colonnes tab1
	printf("Quelle colonnes de tab1 : ");
	scanf_s("%d", &colonnes[0]);

	//Ligne tab2
	printf("Quelle ligne de tab2 : ");
	scanf_s("%d", &ligne[1]);

	//Colonnes tab2
	printf("Quelle colonnes de tab2 : ");
	scanf_s("%d", &colonnes[1]);


	/*afficher*/
	//tab1
	affiche(tab1, ligne[0], colonnes[0]);

	//tab2
	affiche(tab2, ligne[1], colonnes[1]);
}