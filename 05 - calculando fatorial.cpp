#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

long long int factorial(long long int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Calculando fatorial ---\n\n");
	
	long long int n, result;
	
	printf(" Digite um número para calcular seu fatorial: ");
	scanf("%lld",&n);
	
	result = factorial(n);
	
    printf(" O fatorial de %lld é: %lld\n\n",n,result);
    
    system("pause");
    
	return 0;
}

long long int factorial(long long int n){
	
	if (n == 0 || n == 1) {
        return 1;
    } else {
    	for(int i=n-1;i>=1;i--){
			n *= i;
		}
	}
	
	return n;
}
