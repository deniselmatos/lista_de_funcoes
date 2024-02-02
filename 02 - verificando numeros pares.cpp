#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int last_even_digit(int n);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Verificação de paridade ---\n\n");
	
	int n;
	
	printf(" Digite um número: ");
	scanf("%d",&n);
	
	
	if(last_even_digit(n) == 1) {
		printf(" %d é par\n\n",n);
	} else {
		printf(" %d é impar\n\n",n);
	}
	
	system("pause");
	
	return 0;
}

int last_even_digit(int n){
	
	while (n > 1){
		n -= 2;
	}
	
	if (n == 0 ){
		return 1;
	} else {
		return 0;
	}
	
}
