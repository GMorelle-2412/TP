/*Question nº3
Soit une variable de type char * :
- écrire un programme qui saisit une chaîne de caractères et qui la stocke dans cette variable, 
- puis qui affiche les éléments de la chaîne caractère par caractère avec leur adresse .*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//saisie
	char* text = (char*)malloc(999 * sizeof(char));

	printf_s("Ecrire votre texte : ");
	fgets(text, 999, stdin);

	printf_s("");
	

	//affichage
	for (int i = 0; i < strlen(text)-1; i++) {
		printf_s("%c ", text[i]);
		printf_s("a l'adresse : %p\n", &text[i]);
	}

	free(text);
}