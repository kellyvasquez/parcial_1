#include <stdio.h>
#include <stdlib.h>

void dato();
void imprimir ();
void transpuesta ();

int fila, colum, **p_matriz;

int main(){
	dato();
	imprimir();
	transpuesta ();
	free(p_matriz);
	return 0;
}

void dato(){

    printf("*****MATRIZ TRANSPUESTA*****\n\n");
	printf("Ingrese la longitud de filas: "); scanf("%d", &fila);
	printf("Ingrese la longitud de columnas: "); scanf("%d", &colum);

	p_matriz=(int**)malloc(fila*sizeof(int*));
	for(int i=0; i<colum; i++){
		p_matriz[i]=(int*)malloc(colum*sizeof(int));
	}
	if(p_matriz==NULL){
		printf("Error reservando memoria. \n");
		exit (1);
	}else{
		printf("\n\n");
		for(int f =0; f<fila; f++){
			for(int c=0; c<colum; c++){
				printf("ingrese dato posicion (%d, %d): ", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f))); }
		}
	}
}
void imprimir(){
    printf("\n\nMatriz original: \n");
	for(int f =0; f<fila; f++){
		for(int c=0; c<colum; c++){
			printf(" %d ",*(*(p_matriz+c)+f)); }
        printf("\n"); }
}
void transpuesta (){
    printf("\nMatriz transpuesta: \n");
    for(int f =0; f<fila; f++){
		for(int c=0; c<colum; c++){
			printf(" %d ", *(*(p_matriz+f)+c)); }
        printf("\n"); }
}
