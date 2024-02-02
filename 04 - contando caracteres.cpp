#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

void count_char(char string[]);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Contando caracteres ---\n\n");
	
	char text[1000];
	
	printf(" Digite um texto: ");
	scanf("%1000[^\n]",text);
	
	count_char(text);
	
	printf("\n");
	
	system("pause");
	
	return 0;
}

void count_char(char string[]) {
    int occ[256] = {0}; 

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            occ[(int)string[i]]++;
        }
    }

    printf("\n O texto informado tem as sequintes quantidades de caracteres:\n");
    for (int i = 0; i < 256; i++) {
        if (occ[i] > 0) {
            printf(" %c: %d\n", (char)i, occ[i]);
        }
    }
}

