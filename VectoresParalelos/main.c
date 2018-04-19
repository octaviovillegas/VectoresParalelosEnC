#include <stdio.h>
#include <stdlib.h>
#define TAMAMANIO 5
void mostrarAlumno(char[][50],int[],int[],float[],int[],int);

int main()
{


    char nombres[TAMAMANIO][50]={"juan","maria","alfredo" , "jose", "lili"};
    int notasUno[TAMAMANIO]={};
    int notasDos[TAMAMANIO]={};
    float promedios[TAMAMANIO]={};
    int legajos[TAMAMANIO]={};

    mostrarAlumno(nombres,notasUno,notasDos,promedios,legajos,TAMAMANIO);

    return 0;
}
void mostrarAlumno(char nombres[][50],int primeraNota[],int segundaNota[],float promedio[],int legajos[],int largo){

 int i;
    for(i=0;i<largo;i++)
    {
        printf("\n:%d , n:%s ,n1: %d , n2:%d , p:%.2f",legajos[i],nombres[i],primeraNota[i],segundaNota[i],promedio[i] );

    }

}
