1)
 Ed, Edd y Eddy tienen una máquina de golosinas donde fueron guardando todos los caramelos rompemuelas que tienen. Ésta misma sólo saca un caramelo cuando se ingresa el código correcto, que consiste en la suma de las edades de los tres. Ed quiere comer uno antes de irse a dormir, pero no es muy bueno con las sumas. Ayudalo implementando un procedimiento que le diga el código a ingresar.

Implementar el procedimiento imprimir_codigo, el cual reciba tres números e imprima por pantalla el resultado de la suma de estos.
Ejemplos:

Si se recibe 15, 18 y 17, debe imprimirse "50".
Si se recibe 21, 20 y 24, debe imprimirse "65".
  
  
  
  #include <stdio.h>

void imprimir_codigo(/*Aca deberias recibir los parametros */) {
    // Aqui va tu codigo…
}

int main(){
    int edad_ed;
    scanf("%i", &edad_ed);
    int edad_edd;
    scanf("%i", &edad_edd);
    int edad_eddy;
    scanf("%i", &edad_eddy);

    imprimir_codigo(/*Aca deberias enviar los parametros */);

    return 0;
}


2)
 El invierno es la peor época para los chicos del barrio, ya que junto con las gripes, llega una enfermedad mucho más dañina, la pubertad, la cual se lleva cientos de soldados cada año. Para poder distinguir si un agente tiene gripe o se está volviendo un adulto, se hace una simple prueba: se le pide que diga el primer número que le viene a la mente. Como todo el mundo sabe, los chicos solo saben contar del 1 al 10 (inclusive), por lo que si su número cae por fuera de este rango, significa que le agarró la enfermedad de la pubertad.

Implementar la función tiene_pubertad la cual dado un número entero devuelva true si este está por fuera del rango 1-10 (tanto el 1 como el 10 cuentan como dentro del rango), o false en caso contrario.
Ejemplos:

Si se recibe 9, la función debe devolver false.
Si se recibe 15, la función debe devolver true.
  
  
  
  
#include <stdio.h>
#include <stdbool.h>

bool tiene_pubertad(/*Aca deberias recibir los parametros */) {
    // Aqui va tu codigo…
}

3)
  En su laboratorio Dexter está trabajando en un nuevo invento, algo que revolucionará su vida: unos auriculares que tapen por completo sólo la voz de su hermana, para que él pueda trabajar en paz. Pese a que no logró tapar por completo su voz, la pudo amortiguar bastante, por lo que quiere probar la calidad de sus nuevos auriculares. Para esto generó un rango de calidad según el volumen que le llega por los auriculares:

-Excelente (A): si el volumen amortiguado es menor o igual a 10.
-Bueno (B): si el volumen amortiguado es mayor a 10 y menor o igual a 40.
-Malo (C): si el volumen amortiguado es mayor a 40 y menor o igual a 70.
-Pésimo (D): si el volumen amortiguado es mayor a 70.

Hay que ayudar a Dexter a calcular el nivel de calidad de sus auriculares dado el volumen exterior, que en este caso ese sería el de la voz de Dee Dee. Dado que el cálculo del volumen amortiguado es demasiado avanzado, él ya nos dejó una función que lo calcula por nosotros.

Implementar la función calcular_calidad_auriculares el cual dado el volumen de la voz de Dee Dee, devuelve el nivel de calidad.
  
  
  
  
  #include "solucion.h"
// Aqui van las constantes…
#define AMORTIGUAMIENTO 3

int volumen_amortiguado(int volumen) {
    return (volumen / AMORTIGUAMIENTO);
}

char  calcular_calidad_auriculares(int volumen) {
    // Aca deberias hacer la llamada a la funcion ´volumen_amortiguado´.
    // Aqui va tu codigo…

}


4)
  Luego de varias batallas perdidas, Mojo Jojo ideó un nuevo plan para atacar a las chicas super poderosas, el cual se basa en atacarlas los días en donde están más cansadas, para así aumentar sus oportunidades de ganar. Él sabe que están cansadas siempre los días lunes, miércoles y domingo. Además Mojo Jojo tiene que estar bien descansado para poder atacar, y para eso tiene que haber dormído un mínimo de 9 horas (inclusive).
Para este ejercicio, se pide implementar tanto la función estan_cansadas como la función puede_atacar:

Implementar la función estan_cansadas, que según un caracter devuelva true si ese día están cansadas o false en caso contrario.
Los días están representados con los siguientes caracteres:
-Lunes (L).
-Martes (M).
-Miércoles (X).
-Jueves (J).
-Viernes (V).
-Sábado (S).
-Domingo (D).

Implementar la función puede_atacar, el cual recibe un caracter que representa el día de la semana y las horas dormidas por Mojo Jojo, y devuelva true si pueden atacar o false en caso contrario.
  
  
  #include <stdio.h>
#include <stdbool.h>

bool estan_cansadas(char dia) {
	// Aquí va tu código
}

bool puede_atacar(char dia, int horas_que_durmio) {
	// Aquí va tu código
	// (deberías hacer la llamada a la función estan_ cansadas)	
}

5)
  En la mansión Foster algún amigo imaginario problemático ha estado dando vuelta el papel higiénico, algo inadmisible para el Señor Conejo. Es por esto que estuvo todo el día verificando cada baño para poner los papeles higiénicos en la orientación que corresponde.
Después de 5 horas de estar saltando de baño en baño, el Señor Conejo ya está muy cansado, y además necesita hacerse cargo de otras cosas en la mansión. Así que nos pidió ayuda:

Implementar un procedimiento que dado por parámetro la orientación del papel higiénico, cambie ésta misma a la posición correcta si es que no lo está. Las posiciones pueden ser:
La correcta: al frente (F).
La incorrecta: al reverso (R).
Pensá cómo debería pasarse y recibir el parámetro de la posición al procedimiento corregir_posicion_papel_higienico para que el cambio que hagas en este se pueda ver “por fuera” cuando termine de ejecutarse el procedimiento.
  
  
  #include <stdio.h>
// Aqui van las constantes...

void corregir_posicion_papel_higienico(/*Aca deberias recibir la posicion */) {
    // Aqui va tu codigo...
}


6)
  Shaggy está jugando con Scooby al típico juego de los magos de esconder una pelota debajo de un vaso y mezclarlo junto con otros vasos. Solo que su versión del juego es mucho más rica, ya que esconden una hamburguesa en vez de una pelota y usan cajas en vez de vasos (porque las hamburguesas no entran en los vasos).
Si el que elige encuentra la hamburguesa se la puede comer, sino, se la queda el que la mezcló.
Después de un par de rondas están un poco demasiado llenos como para mezclar, así que te pidieron implementar un algoritmo que la realice.

Implementar un procedimiento que dadas tres cajas realice la mezcla. La caja que tenga la hamburguesa será representada por una H y las que están vacías con una V. El algoritmo para mezclar sigue las siguientes reglas:
Si la hamburguesa estaba en la primera caja, esta pasa a estar en la tercera.
Si la hamburguesa estaba en la segunda caja esta pasa a estar en la primera.
Y si la hamburguesa estaba en la tercera caja, esta pasa a estar en la segunda.
Ejemplo:

Si se recibe VHV, debe cambiarse a HVV.
Si se recibe VVH, debe cambiarse a VHV.
  
  #include <stdio.h>
// Aqui van las constantes...

void mezclar_cajas(char* primer_caja, char* segunda_caja, char* tercera_caja) {
    // Aqui va tu código...
}

7)
  Blue y Mac están apostando parte de sus ahorros a adivinar cuántos huevos pone Coco en el día. El que gana, se lleva 10 pesos del que pierde, y si hay empate los ahorros de ambos están a salvo.

Implementar una función que dados los ahorros de Mac, los ahorros de Blue y la cantidad de huevos que puso Coco en el día, modifique ambos ahorros según corresponda. Tener en cuenta que:
Si Coco puso más de 10 huevos, Blue le da 10 pesos a Mac.
Si Coco puso menos de 10 huevos, Mac le da 10 pesos a Blue.
Si puso exactamente 10 huevos, entonces no pasa nada.
Si el que pierde no posee el dinero necesario, le dará todo lo que pueda hasta quedar en 0.
  
  
  #include <stdio.h>
// Aqui van las constantes...

void realizar_apuesta(int* ahorros_mac, int* ahorros_blue, int huevos_puestos) {
    // Aqui va tu codigo...
}


8)
  Los tres queridos osos atraviesan varios cambios de humor a lo largo de un año según la estación. Por lo que los expertos en osos nos dijeron (osea, lo que nos dijo Chloe) que por cada estación del año, cada oso pasa por un humor diferente.
Los humores por lo que pueden pasar son los siguientes:

Contento (C)
Meh (M)
Triste (T)
Y estos son lo cambios que logramos anotar:

-Primavera (P): Panda y Pardo están contentos, mientras que Polar está meh.
-Verano (V): Polar está triste, Panda está meh y Pardo está contento.
-Otoño (O): los tres osos están contentos (obvio, si es la mejor estación).
-Invierno (I): Polar está contento, Panda está meh y Pardo está triste.

Implementar una función que dada la estación del año, modifique el humor de cada oso al correspondiente, y devuelva la cantidad de osos que están contentos.
  
  
  #include <stdio.h>
// Aqui van las constantes…

int definir_humor_osos(char* humor_panda, char* humor_pardo, char* humor_polar, char estacion){
    // Aqui va tu código...
}



  
  
