#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float nota_atv(float atv_atribuidas, float atv_concluidas);
float nota_bimestre(float av_escrita, float av_pratica, float atv_atribuidas, float atv_concluidas);
float media_final(float calc_media_simples1, float calc_media_simples2, float calc_media_simples3, float calc_media_simples4);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf(" \n --- Cálculo da média final ---\n");
	
	float av_escrita, av_pratica;
	float atv_atribuidas, atv_concluidas;
	float nota_atv1, nota_atv2, nota_atv3, nota_atv4;
	float calc_media_simples1, calc_media_simples2, calc_media_simples3, calc_media_simples4;
	
	for(int i=1; i<=4;i++){
		
		printf("\n Notas do %dº bimestre: \n",i);
		
		printf("\n Digite a nota da avaliação escrita: ");
		scanf("%f",&av_escrita);
	
		printf(" Digite a nota da avaliação prática: ");
		scanf("%f",&av_pratica);
		
		
		printf("\n Digite a quantidade de atividades atribuidas: ");
		scanf("%f",&atv_atribuidas);
	
		printf(" Digite a quantidade de atividades concluídas: ");
		scanf("%f",&atv_concluidas);
		
		
		if (i==1){
			nota_atv1 = nota_atv(atv_atribuidas, atv_concluidas);
			calc_media_simples1 = nota_bimestre(av_escrita, av_pratica, atv_atribuidas, atv_concluidas);
		} else if (i==2){
			nota_atv2 = nota_atv(atv_atribuidas, atv_concluidas);
			calc_media_simples2 = nota_bimestre(av_escrita, av_pratica, atv_atribuidas, atv_concluidas);
		} else if (i==3){
			nota_atv3 = nota_atv(atv_atribuidas, atv_concluidas);
			calc_media_simples3 = nota_bimestre(av_escrita, av_pratica, atv_atribuidas, atv_concluidas);
		} else if (i==4){
			nota_atv4 = nota_atv(atv_atribuidas, atv_concluidas);
			calc_media_simples4 = nota_bimestre(av_escrita, av_pratica, atv_atribuidas, atv_concluidas);
		} 
	}
	
	printf("\n\n Média simples das notas de cada bimestre:\n\n Primeiro bimestre: %.2f\n",calc_media_simples1);
	printf(" Segundo bimestre: %.2f\n",calc_media_simples2);
	printf(" Terceiro bimestre: %.2f\n",calc_media_simples3);
	printf(" Quarto bimestre: %.2f\n",calc_media_simples4);
	
	float result_final = media_final(calc_media_simples1, calc_media_simples2, calc_media_simples3, calc_media_simples4);
	
	printf("\n\n A média final é: %.2f\n\n", result_final);
	
	system("pause");

	return 0;
}

float nota_atv(float atv_atribuidas, float atv_concluidas){
	
	float media_atv = (atv_concluidas / atv_atribuidas) * 10;
	
	return media_atv;
}

float nota_bimestre(float av_escrita, float av_pratica, float atv_atribuidas, float atv_concluidas){
	float nota_atv(float atv_atribuidas, float atv_concluidas);
	
	float media_bimestre = (nota_atv(atv_atribuidas, atv_concluidas) + av_escrita + av_pratica) / 3;
	
	return media_bimestre;
	
}

float media_final(float calc_media_simples1, float calc_media_simples2, float calc_media_simples3, float calc_media_simples4){
	
	float calc_media_final = ( (calc_media_simples1*2) + (calc_media_simples2*3) + (calc_media_simples3*2) + (calc_media_simples4*3) ) / 10;
	
	return calc_media_final;
}
