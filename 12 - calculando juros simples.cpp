#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

float simple_interest(float c, float i, float t);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Calculando juros simples ---\n\n");
	
	float c, i, t, final_amount;
	
	printf(" Digite o valor do capital inicial: ");
    scanf("%f",&c);

    printf(" Digite o valor da taxa de juros (ao mês): ");
    scanf("%f",&i);

    printf(" Digite o tempo de investimento (em meses): ");
    scanf("%f",&t);
    
    float simple_i = simple_interest(c, i, t);
    
    final_amount = c + simple_i;
    
    printf("\n O valor final do juros simples é: %.2f\n",simple_i);
    printf(" O valor final do montante, considerando os juros simples é: %.2f\n\n",final_amount);
    
    system("pause");
	
	return 0;
}

float simple_interest(float c, float i, float t){
	i /= 100;
	float j = c * i * t;

	return j;
}
