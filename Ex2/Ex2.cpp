/*Question nº2
Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe sur un 
emplacement mémoire suffisant afin de stocker 6 entiers donnés par l’utilisateur. 
Puis vous rangerez ces valeurs dans l’ordre croissant.
Rechercher le maximum, l'afficher ainsi que son adresse et sa position.*/

#include <stdio.h>
#include <stdlib.h>

int*adr_deb =(int*)malloc(sizeof(int));

int main(){
	print("", adr_deb);
}