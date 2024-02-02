#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

long long int verify_prime(long long int n);

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf(" \n --- Verificando se um número é primo ---\n\n");
	
	long long int n;
	
	printf(" Digite um número: ");
	scanf("%lld",&n);
	
	if (verify_prime(n)==1){
		printf("\n %lld é primo. \n\n",n);
	} else {
		printf("\n %lld não é primo. \n\n",n);
	}
	
	system("pause");
	
	return 0;
}

long long int verify_prime(long long int n){
	int divi = 2;
	int prime = 1;
	
	while(divi < n){
        if(n % divi == 0){
            prime = 0;
            break;
        }
        divi++;
    }
	
	if(prime){
		return 1;
	} else {
		return 0;
	}
	
}
