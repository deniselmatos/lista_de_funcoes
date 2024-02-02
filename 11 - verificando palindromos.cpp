#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int palindrome(char string[]);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Verificando palindromos ---\n\n");
	
	char text[100];
	
	printf(" Digite um texto (sem acentuação): ");
	scanf("%100[^\n]",text);
	
	if (palindrome(text) == 1){
		printf (" Palíndromo\n\n");
	} else {
		printf (" Não é palíndromo\n\n");
	}
	
	system("pause");
	
	return 0;
}

int palindrome(char string[]){
	
	char copy[100];
	int i, j= 0, size, diferency = 0;
	
	for (int k=0; k < strlen(string); k++){
        string[k] = tolower(string[k]);
    }
	
	for (i=0;i<strlen(string);i++){
		if (string[i] != '!' && string[i] != '?' && string[i] != ' ' && string[i] != ',' && string[i] != '.' && string[i] != '-'){
			copy[j++] = string[i];
		}
	}
	
	copy[j] = '\0';
	
	size = strlen(copy);
	size--;
	
	for (i=0;i<strlen(copy);i++){
		if (copy[i]!= copy[size]){
			diferency++;
		}
		size--;
	}
	
	if (diferency==0){
		return 1;
	} else {
		return 0;
	}
	
}


