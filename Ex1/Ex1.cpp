#include <stdio.h>
#include <stdlib.h>
/*Question nº1
- adr1 et adr2 sont des pointeurs pointant sur des réels.

- Le contenu de où pointe adr1 vaut -45,78; le contenu de où pointe adr2 vaut 678,89. 

- Ecrire un programme qui ne contient que deux variables(adr1 et adr2) de type 
pointeurs sur réél, qui stocke deux valeurs réelles (-45.78 et 678.89) et qui affiche les 
adresses des espaces mémoires qui stockent les deux rééls ainsi que le contenu de 
ces deux espaces.
*/
int main() {
	double *ard1 = (double*) malloc(sizeof(double));
	double *ard2 = (double*) malloc(sizeof(double));

	*ard1 = -45.78;
	*ard2 = 678.89;

	printf("Adresse de ard1 est : %p\n", ard1);
	printf("La valeur a l'adresse pointer par ard1 est : %f\n", *ard1);
	printf("\n");
	printf("Adresse de ard2 est : %p\n", ard2);
	printf("La valeur a l'adresse pointer par ard2 est : %f\n", *ard2);

	free(ard1);
	free(ard2);
}
