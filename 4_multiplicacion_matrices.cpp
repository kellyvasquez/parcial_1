#include <stdio.h>
#include <stdlib.h>

//MATRIZ DINAMICO

void pedirdato();
void imprimir();

int fila, colum, **p_matriz;

int main (){

    dato();
    imprimir ();
    free (p_matriz);
}

void dato() {

    printf ("Ingrese longitud de filas\n");
    scanf("%d", &fila);
    printf ("Ingrese longitud de columnas\n");
    scanf("%d", &colum);

    p_matriz=(int **)malloc(filas*sizeof(int)*);
    for (int i=0; i<longcolum; i++){
        p_matriz[i]=(int*)malloc(colum*sizeof(int)); }
}

    for (int i=0; i<fila; i++){
        for (int k=0; k<colum; k++){
            printf("ingrese dato [%d,%d]\n", flia, colum);
            scanf("%d", &(*(*(p_matriz+k)+i)));
        }
    }
