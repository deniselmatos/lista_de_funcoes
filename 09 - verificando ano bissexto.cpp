#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int leap_year(int n);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Verificando ano bissexto ---\n");
	
	int n;
	char new_calc[3];
	
	do{
		printf("\n Digite um ano: ");
		scanf("%d",&n);	
		
		if (leap_year(n)==1){
			printf(" %d é um ano bissexto. ",n);
		} else {
			printf(" %d não é um ano bissexto. ",n);
		}
	
		printf("\n\n Realizar novo cálculo? [S/N] \n");
		scanf(" %c",new_calc);
		
	} while(new_calc[0] == 'S' || new_calc[0] == 's');
	
	system("pause");
	
	return 0;
}

int leap_year(int n){
	if ((n%400==0) || (n%4==0) && (n%100!=0)){
		return 1;
	} else {
		return 0;
	}
}
