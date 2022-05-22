/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que calcule la media de las notas introducidas 
	por el teclado con un dialogo interactivo

	*/
	
#include <stdio.h>

int main(){
	int numero;
	float nota, suma, prom;
	
	printf("Introduce la cantidad de notas: ");
	scanf("%d",&numero);
	
	for(int i;i<=numero;i++){
		printf("introduce la nota %d: ",i);
		scanf("%f",&nota);
		suma=suma+nota;
	}
	prom=suma/numero;
	
	printf("\nLa media de estas %d notas es: %.2f",numero,prom);
}
