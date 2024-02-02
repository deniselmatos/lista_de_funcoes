#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void even_and_odd_numbers(int list_size, int even_numbers[], int odd_numbers[]);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Separando números pares e ímpares --- \n\n");

	int list_size;
	
	printf(" Informe o tamanho da lista de números: ");
	scanf("%d",&list_size);
	
	int even_numbers[list_size];
	int odd_numbers[list_size];
	
	even_and_odd_numbers(list_size, even_numbers, odd_numbers);
	
	system("pause");
	
	return 0;
	
}

void even_and_odd_numbers(int list_size, int even_numbers[], int odd_numbers[]){
	int j_even = 0;
	int k_odd = 0;
	int l = 1;
	int n;
	
	printf("\n Digite os números:\n\n");
	
	for(int i = 0; i < list_size; i++){
		printf(" Número %d: ",l);
		scanf("%d",&n); 
		l++;
	
		if (n%2==0){
			even_numbers[j_even] = n;
			j_even ++;
		} else {
			odd_numbers[k_odd] = n;
			k_odd++;
		}
	}
	
	printf("\nPares\tÍmpares\n");
	
    for(int i = 0; i < list_size; i++){

        if(i < j_even){
            printf("%d\t", even_numbers[i]);
        }else{
            printf("\t");
        }
        
        if(i < k_odd){
            printf("%d\n", odd_numbers[i]);
        }else{
            printf("\n");
        }
    }
	
}
