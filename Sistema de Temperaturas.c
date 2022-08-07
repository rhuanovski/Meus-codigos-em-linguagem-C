#include <stdio.h>
#include <locale.h>
#include "rhuan.h"

int main (void) {
	
setlocale(LC_ALL, "ptb");
system("title SISTEMA DE TEMPERATURAS MÉDIAS");	
system("color 0a");

printf("-----------------------------BEM-VINDO AO SISTEMA DE TEMPERATURAS MÉDIAS-----------------------------\n");
int n;
printf("\nDEFINA O TAMANHO DO VETOR SOMENTE COM VALORES MAIORES QUE 0(ZERO): \n");
scanf ("%d", &n);
float vetor[n];

for (; n <= 0; ) {
	printf("DEFINA O TAMANHO DO VETOR SOMENTE COM VALORES MAIORES QUE 0(ZERO): \n");
    scanf ("%d", &n);
}
int i = 0;

	for (i=0; i < n; i++) {
		printf("Digite a %dº temperatura: \n", i+1);
		scanf("%f", &vetor[i]);
	}

preencherVet(vetor, n); //chama a função e passa os valores por referencia
	
	getchar();
	system("pause");
	return 0;
}

 
