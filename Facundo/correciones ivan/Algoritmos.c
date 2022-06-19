#include<stdio.h>


const float PI= 3.1416;

int main(){
/*ejercicio 1 algoritmos*/

float radio;
float area;
float longitud;


    printf("Ingrese valor para radio del circulo");
    scanf("%f",&radio);
    longitud=2*PI*radio;
    area=PI*radio*radio;
     printf("Longitud es igual a %f\n",longitud);
     printf("Area es igual a %f\n",area);



/*ejercicio 2 algoritmos */

int costos_de_reparacion, ahorros;

    printf("Ingrese valor para costos_de_reparacion");
    scanf("%i",&costos_de_reparacion);
    printf("Ingrese valor para ahorros");
    scanf("%i",&ahorros);

    if(ahorros>=costos_de_reparacion){
        printf("Tranki que podemos arreglarla\n");}
     else{
        printf("Siamo fuori, no podemos volver\n");}



/*ejercicio 3 algoritmos*/


char destino;

    printf("Ingrese la inicial de su destino\n");
    scanf("%c",&destino);

    if (destino=='c')
        printf("Su tarifa va a ser de $80\n");
    else if (destino=='f')
        printf("Su tarifa va a ser de $50\n");
    else if (destino=='b')
        printf("Su tarifa va a ser de $120\n");
    else {
        printf("No puedo llevarte a ese planeta porque no esta en la lista\n");}

/*ejercicio 4 algoritmos */

float frecuencia_deseada;
float frecuencia_inicial;
float frecuencia_wt;

    printf("Ingrese valor para la frecuencia inicial\n");
    scanf("%f",&frecuencia_inicial);
    printf("Ingrese valor para la frecuencia deseada\n");
    scanf("%f",&frecuencia_deseada);

int cambios_de_frecuencia=0;

    while(frecuencia_wt<frecuencia_deseada){
       frecuencia_wt= (frecuencia_wt+0.1);
       cambios_de_frecuencia++;}

      printf("Despues de %i cambios de frecuencia, se logro sintonizar la correcta\n", cambios_de_frecuencia);



return 0;

}
