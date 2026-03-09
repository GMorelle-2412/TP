/*Question nº2
Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe sur un 
emplacement mémoire suffisant afin de stocker 6 entiers donnés par l’utilisateur. 

Puis vous rangerez ces valeurs dans l’ordre croissant.

Rechercher le maximum, l'afficher ainsi que son adresse et sa position.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//pointeur
	int* adr_deb = (int*)malloc(6*sizeof(int));

	//saisie des valeurs
	printf("Donner 6 valeurs : \n"); 
	for (int p = 0; p < 6; p++) { 
		scanf_s("%d", &adr_deb[p]); 
	}

	//trie des valeurs
	int max = 0;
	int sauve = 0;
	for (int t = 0; t < 6; t++) {
		for (int more = 0; more < 6-1; more++) {
			if (adr_deb[more] > adr_deb[more + 1]) {
				sauve = adr_deb[more];
				adr_deb[more] = adr_deb[more + 1];
				adr_deb[more + 1] = sauve;
				max++;
			}
		}
	}

	//Rechercher le maximum
	int* maximum = &adr_deb[5];

	printf_s("\n");

	//Affiche adresse du maximum
	printf_s("L'adresse du maximum est : %p\n", &adr_deb[5]);

	printf_s("\n");

	//Affiche position maximum
	printf_s("Est la position du maximum est : %d\n", maximum);

	free(adr_deb);
}