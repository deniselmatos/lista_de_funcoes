#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define list_size 100

int maximum_n(int list_n[], int size);
int minimum_n(int list_n[],int size);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Calculando o mínimo e o máximo ---\n\n");
    
    int list_n[list_size];
    int n, i=0;
	
    printf(" Digite os números ou um número negativo para finalizar: ");

    while (n >= 0 && i < list_size){
        scanf("%d", &n);

        if (n >= 0) {
            list_n[i] = n;
            i++;
        }
    } 
    
    int maximum = maximum_n(list_n,i);
    int minimum = minimum_n(list_n,i);

    printf("\n Maior valor dentre os informados: %d\n Menor valor dentre os informados: %d\n\n",maximum,minimum);
    
    system("pause");
	
	return 0;
}

int maximum_n(int list_n[], int size) {
	
    int maximum, read=1;
	
    for (int i = 0; i < size; i++) {
    	
    	if(read == 1){
			maximum = list_n[i];
			read = 0;
		}
    	
        if (list_n[i] > maximum) {
            maximum = list_n[i];
        }
    }

    return maximum;
}

int minimum_n(int list_n[], int size) {
	
    int minimum, read=1;
	
    for (int i = 0; i < size; i++) {
    	
    	if(read == 1){
			minimum = list_n[i];
			read = 0;
		}
    	
        if (list_n[i] < minimum) {
            minimum = list_n[i];
        }
    }

    return minimum;
}

