#include <stdio.h>
#include <stdlib.h>

void imprimirVet(float vetor[], int n);
float mediaVet(float vetor[], int n);
float contadorMaior(float vetor[], int n, float media);

float preencherVet(float vetor[], int n){
	
	float *p;
	p = vetor;
	printf ("\nO ponteiro 'p' está apontando para o vetor de %d posições e o seu valor na posição inicial é: %.2f\n", n, *p);
	int a;

printf ("\nEscolha uma opção abaixo: \n");
printf("2 - CALCULAR A MEDIA DO VETOR\n");
printf("1 - IMPRIMIR O VETOR\n");
printf("0 - SAIR\n");
scanf ("%d", &a);

switch (a) {
	
	case 2: 
	     mediaVet(p, n);
         break;	
	case 1: 
	     imprimirVet(p, n);
         break;
    case 0:
    	exit(1);
        break;
    default: 
	    printf ("\aerror invalid command\n");
        break; 
}
	
	return *p;
}

void imprimirVet(float vetor[], int n) {

int i=0;

printf("Todos os valores do vetor listados abaixo: \n");
	for(i=0; i < n; i++) {
		printf("%.2f, ", vetor[i]);
	}
}

float mediaVet(float vetor[], int n) {
	
	int i;
	float media = 0;
	
    for (i=0; i < n; i++) {
	media = media + vetor[i];
	} 
	media = media / n;
	
	printf ("A média do vetor: %.2f\n", media);
	contadorMaior(vetor, n, media);
	
	return 0;
}

float contadorMaior(float vetor[], int n, float media) {

int i=0;
float acimaMedia = 0;
printf ("Temperaturas acima da média: \n");

for (i=0;i < n;i++) {
	if (vetor[i] > media) {
		printf("%.2f, ", vetor[i]);
	}
}
return media;
}
