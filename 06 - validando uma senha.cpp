#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int verify_password(char string[]);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Validando uma senha ---\n\n");
	
    char password[100];

    printf(" Digite a senha: ");
    scanf("%s", password);

    if (verify_password(password)==1) {
        printf("\n Senha válida\n\n");
    } else {
        printf("\n Senha inválida\n\n");
    }
    
    system("pause");

    return 0;
}

int verify_password(char string[]) {
    int i, uppercase = 0, lowercase = 0, number = 0, special_char = 0;
    
	if (strlen(string) < 8) {
        return 0;
    }
    
    for (i = 0; string[i] != '\0'; i++) {
        if (isupper(string[i])) {
            uppercase = 1;
        } else if (islower(string[i])) {
            lowercase = 1;
        } else if (isdigit(string[i])) {
            number = 1;
        } else if (!isalnum(string[i])) {
            special_char = 1;
        }
    }

    if (uppercase && lowercase && number && special_char){
    	return 1;
	} else {
		return 0;
	}
}
