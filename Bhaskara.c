#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (void) {
	
	setlocale(LC_ALL, "ptb");
	system("title QUESTAO 4");
	
	float modular2(float a, float b, float x);
	float r = 0;
	float s = 0;
	float t = 0;
	float calculo = 0;
	/* a = r; b = s; x = t; */
	
	printf ("Insira um número diferente de 0 para ser armazenado em 'a'\n");
	scanf ("%f", &r);
	
	for ( ;r == 0; ) {
		printf ("Insira um número diferente de 0 para ser armazenado em 'a'\n");
	    scanf ("%f", &r); }
	
	printf ("Insira um número diferente de 0 para ser armazenado em 'b'\n");
	scanf ("%f", &s);
	
	for ( ;s == 0; ){
	    printf ("Insira um número diferente de 0 para ser armazenado em 'b'\n");
	    scanf ("%f", &s); }
	
	printf ("Insira um número diferente de 0 para ser armazenado em 'x'\n");
	scanf ("%f", &t);
	
	for ( ;t == 0; ) {
		printf ("Insira um número diferente de 0 para ser armazenado em 'x'\n");
	    scanf ("%f", &t); }
	
	printf ("ANTES DE PASSAR PELA EQUAÇÃO:\na = %g\n\nb = %g\n\nx = %g\n\n", r, s, t);
	
	calculo = modular2(r, s, t);
	
	return 0;
}

float modular2(float a, float b, float x) {
	
	float c = 1;
	
	a = (b+x)/2;
	b = (a/2+b*x)*(a+x)/(b+x);
	x = (-b+sqrt(b*b - 4*a*c)/2*a);
	
	printf ("DEPOIS DE PASSAR PELA EQUAÇÃO:\na = %g\n\nb = %g\n\nx = %g\n\n", a, b, x);
	
	return a, b, x;
}
