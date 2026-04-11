#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// estructuras
typedef struct
{
    int velocidad;
    int anio;
    int cant_nucleos;
    char *tipo_cpu;
} compu;

// funciones
void cargarDatosPc(compu pcs[], char tipos[][10], int cantPc);
void listarPCs(compu pcs[], int cantPc);
void mostrarMasAntigua(compu pcs[], int cantPc);
void mostrarMasVeloz(compu pcs[], int cantPc);
void librarMemoria(compu pcs[], int cantPc);

// funcion principal
int main()
{
    int cantPc = 5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athion", "Core", "Pentiun"};
    srand(time(NULL));
    compu pcs[cantPc];
    cargarDatosPc(pcs, tipos, cantPc);

    return 0;
}

void cargarDatosPc(compu pcs[], char tipos[][10], int cantPc)
{
    int indice=0;
    for (int i = 0; i < cantPc; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 10;
        pcs[i].cant_nucleos = 1 + rand() % 8;
        indice = rand() % 6;
        pcs[i].tipo_cpu = tipos[indice];
    }
}