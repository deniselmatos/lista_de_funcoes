#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int number_squared(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Calculando o quadrado de n�meros ---\n");
	
	int n;
	char new_calc[3];
	
	do{
		printf("\n Digite um n�mero para calcula-lo ao quadrado: ");
		scanf("%d",&n);
	
		int result = number_squared(n);
		printf(" %d elevado ao quadrado �: %d\n\n",n,result);
	
		printf(" Realizar novo c�lculo? [S/N] ");
		scanf(" %c",new_calc);
		
	} while(new_calc[0] == 'S' || new_calc[0] == 's');
	
	system("pause");
	
	return 0;
}

int number_squared(int n){
	int squared = n*n;
	
	return squared;
}
