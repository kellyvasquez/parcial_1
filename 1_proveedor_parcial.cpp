#include <stdio.h>
#include <stdlib.h>

struct producto {
    char pdcto[20];
    int cant_vendida;
    int precio;
    int importe; };

    struct proveedor {
    char nombre[30];
    int telefono;
    char direccion[20];
    char empresa[20];
    producto prod[100];  };

int main () {

    proveedor prov[100];
    int cant, p_mayor, p_menor;
    int mayor=0, menor=0;

    printf("**********REGISTRO DE PROVEEDORES**********\n\n");
    printf("\nIngrese la cantidad de proveedores que desea registrar: "); scanf("%d",&cant);
    system("cls");

    char lista_prod [cant][10];

    for(int i=0;i<cant;i++) {

    printf("**********DATOS DEL PROVEEDOR**********\n\n");
    printf("Ingrese el nombre %d: ", i+1); scanf("%s", prov[i].nombre);
    printf("Ingrese el telefono: "); scanf("%d",&prov[i].telefono);
    printf("Ingrese la direccion: "); scanf("%s", prov[i].direccion);
    printf("Ingrese la empresa: "); scanf("%s", prov[i].empresa);
    printf("Ingrese producto: "); scanf("%s", lista_prod,prov[i].prod[i].pdcto);
    printf("Ingrese la cantidad vendida: "); scanf("%d", &prov[i].prod[i].cant_vendida);
    printf("Ingrese el costo unitario: "); scanf("%d", &prov[i].prod[i].precio);
    prov[i].prod[i].importe=((prov[i].prod[i].precio)*(prov[i].prod[i].cant_vendida));
    printf("\n\n"); }

    p_mayor=prov[0].prod[0].precio;
    p_menor=prov[0].prod[0].precio;

    for(int i=0;i<cant;i++)
    { if(p_mayor<=prov[i].prod[i].precio);
        { p_mayor=prov[i].prod[i].precio;
            mayor=i; }
    }
    for(int i=0;i<cant;i++)
    { if(p_menor>=prov[i].prod[i].precio)
        { p_menor=prov[i].prod[i].precio;
            menor=i; }
    }

    printf("El proveedor mas caro es: ");
    printf("Nombre: %s\n",prov[mayor].nombre);
    printf("Precio unitario: %d\n",prov[mayor].prod[mayor].precio);
    printf("\n\n");

    printf("El proveedor mas barato es: ");
    printf("Nombre: %s",prov[menor].nombre);
    printf("Precio unitario: %d\n",prov[menor].prod[mayor].precio);
    printf("\n\n");

    printf("Lista de productos: ");
    for (int i=0; i<cant; i++){
        printf("%s ", lista_prod[i]);
    }

    return 0;
}
