/*
* EJERCICIO 1
*Problema: Dise~nar un algoritmo que calcule la longitud de la circunferencia y el area de un crculo de radio dado.
*Datos de entrada: Radio del circulo.
*Datos de salida: Longitud y area del circulo.
*/
/*
* EJERCICIO 2
*Reparando la Nave
*Durante una batalla espacial, la nave de Darth Mendez se averio. Desafortunadamente, su seguro intergalactico
*no cubre siniestros ocurridos en batallas, por lo que debera pagar el arreglo con sus ahorros. Se le pide realizar un
*algoritmo que usando las variables costo de reparacion (correspondiente a lo que cuesta arreglar los da~nos de la
*nave) y ahorros (correspondiente a los ahorros de Darth Mendez) imprima por pantalla si puede pagar el arreglo
*(mensaje : Tranki que podemos arreglarla) o no (mensaje : Siamo fuori, no podemos volver). Los mensajes deben ser
*exactamente esos.
*/
/*
* EJERCICIO 3
*A falta de dinero, a Han Solo se le esta dificultando mantener el Halcon Milenario en condiciones optimas. Debido
*a esto, decide usar dicha nave como taxi para llevar personas desde la cantina de Mos Eisley a distintos planetas.
*Para empezar, decide que solo va a transportar gente a planetas especificos y con tarifa fijas. Estos son: - Feluscia
*(se identifica con 'F') con una tarifa de $50. - Coruscant (se identifica con 'C') con una tarifa de $80. - Bespin (se
*identifica con 'B') con una tarifa de $120. Han necesita que crees un algoritmo que reciba el planeta al que quiere
*ir su pasajero (utilizar la variable destino) e imprima por pantalla "Su tarifa va a ser de N pesos" dependiendo del
*planeta al que quiera ir. En caso de que el planeta al que quiere ir no sea ninguno de los tres se deberia imprimir por
*pantalla "No puedo llevarte a ese planeta porque no esta en la lista" Los mensajes deben ser exactamente esos.
*/
/*
* EJERCICIO 4
*Debido a que el imperio cuenta con tecnologia de punta para interceptar las comunicaciones, los rebeldes decidieron
*usar unos viejos dispositivos de comunicacion llamados Walkie-Talkie. Los rebeldes acordaron una frecuencia por la
*cual comunicarse (variable frecuencia deseada). Realizar un algoritmo que dado un Walkie-Talkie encendido con una
*frecuencia inicial (variable frecuencia inicial) lo sintonice con la frecuencia deseada e imprima por pantalla "Despues
*de N cambios de frecuencia, se logro sintonizar la correcta" Aclaraciones: La frecuencia inicial del Walkie-Talkie
*siempre es menor que la FRECUENCIA DESEADA. La frecuencia del Walkie-Talkie debe aumentarse de a intervalos
*de 0.1
*/


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
