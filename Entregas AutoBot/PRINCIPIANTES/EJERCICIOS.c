1)
El profesor Utonio está con algunos problemitas de memoria, y necesita ayuda para crear a la niñita perfecta, sabe que los 2 primeros son Azúcar y Flores.

Imprimir por pantalla el ingrediente faltante.
	
	
#include <stdio.h>

int main(){
	// Aqui va tu codigo…

	return 0;
}



2)
Dexter está medio frustrado porque su último experimento, un control remoto para controlar a su hermana Dee-Dee es un fracaso.
Este suceso está haciendo que, cada vez que se toca la cabeza, se le caigan 78 pelos.

Imprimir por pantalla cuántos pelos perdió, sabiendo cuántas veces se tocó la cabeza.
Ejemplos:

Si se tocó la cabeza 6 veces, debe imprimirse: "468 pelos."
Si se tocó la cabeza 73 veces, debe imprimirse: "5694 pelos."
  
	
	
 #include <stdio.h>

// Aqui deberias definir una constante que represente 
// cuantos pelos se le cae cada vez que se toca la cabeza...

int main(){
    int veces;
    scanf("%i", &veces);

    // Aqui va tu codigo...

    return 0;
}



3)
Los chicos del barrio quieren organizar una juntada con los agentes de todo el mundo, y Número 1 tiene planeado hacer una torta. Para esto, se necesita saber la cantidad de personas que asistirán para poder adecuar la receta y que alcance para todos los agentes.

Se sabe que una receta rinde para 10 personas.

Imprimir por pantalla cuántas veces tendrá que hacer la receta para que todos queden satisfechos, de acuerdo a la cantidad de asistentes a la reunión.
Ejemplos:

Si los asistentes son 45, debe imprimirse: "5 veces."
Si los asistentes son 101, debe imprimirse: "11 veces."
  
	
#include <stdio.h>

// Aqui deberias definir una constante...

int main(){
    int asistentes;
    scanf("%i", &asistentes);

    // Aqui va tu codigo…

    return 0;
}



4)
Coraje se encuentra atrapado dentro de un laberinto, pero no pretende irse hasta encontrar a Uriel. Para esto se ayuda de su gran olfato, básicamente elige si doblar a la derecha o a la izquierda según que tanto olor a Uriel hay en cada camino.

Imprimir por pantalla qué camino debe tomar a partir de un caracter dado, que representa el camino con más olor a Uriel.
Se espera entonces que:

Si recibe una I (izquierda) se imprima: “Por la izquierda!”.
Si recibe una D (derecha) se imprima: “Por la derecha!”.
Si recibe otra letra, es porque encontró a Uriel y debe imprimirse: “Iiiieiii la encontré”.
  
	
	
 #include <stdio.h>

// Aqui deberias definir las constantes para las opciones...

int main(){
	char camino;
	scanf(" %c", &camino);

	// Aqui va tu codigo.. Coraje debe seleccionar un camino, por lo que deberías usar una estructura selectiva…

	return 0;
}



5)
Billy y Mandy tienen ganas de molestar a Puro Hueso, pero saben que esto les costará bastante trabajo. Para asegurarse de que su plan funcione, cada uno hizo una lista con las maldades que se les ocurrió, y al terminar, deberán sumar por lo menos 15 entre los dos.

Crear un programa que, a partir de la cantidad de maldades pensadas por cada uno, imprima por pantalla “Malditos demonios!!!” si entre los dos lograron llegar a 15 u “Hoy no podrán conmigo” en caso contrario.
Ejemplos:

Si se tiene 10 y 15, la suma da 25, por lo que debe imprimirse: "Malditos demonios!!!"
Si se tiene 2 y 4, la suma da 6, por lo que debe imprimirse: “Hoy no podrán conmigo”



#include <stdio.h>
//Aqui deberias definir una costante..

int main(){
	int cantidad_mandy;
	int cantidad_billy;
	scanf("%i", &cantidad_mandy);
	scanf("%i", &cantidad_billy);
	// Aqui va tu codigo…

	return 0;
}




6)
Tom y Jerry tienen ganas de irse de vacaciones, pero no se deciden ni cuándo ni a dónde ir. Por esta razón, acordaron sortear la época en la que irán (Enero (E) o febrero (F)), y el paisaje que tendrán a la vista (Montaña (M) o playa (P)). De acuerdo a lo que salga, uno de los dos elegirá el destino.

Crear un programa que a partir de los resultados del sorteo, imprima por pantalla “Tom” si le toca elegir a él, o “Jerry” en caso contrario.
Las opciones posibles son:

Tom elige cuando el mes es enero y la vista es Montaña o cuando el mes es febrero y la vista playa.
Jerry elige cuando el mes es enero y la vista es playa o cuando el mes es febrero y la vista montaña.
  
	
	
#include <stdio.h>
// Aqui deberias definir las constantes…

int main(){
	char epoca;
	char paisaje;
	scanf(" %c", &epoca);
	scanf(" %c", &paisaje);
	// Aqui va tu codigo…

	return 0;
}



7)
Una vez que Tom y Jerry por fin tienen un destino a donde ir, decidieron contarle a su amigo Spike. Al escuchar los planes se quiso sumar a sus vacaciones, pero no le convencía el destino, por lo que realizaron el sorteo de nuevo incorporando como opción el mes de marzo y la vista de una laguna.

Imprimir por pantalla “Tom”, “Jerry” o “Spike” según a quien le toque elegir esta vez.
En esta oportunidad, las opciones son:

Tom: Si el mes es enero y la vista es laguna, si el mes es marzo y la vista es playa, o si el mes es febrero y la vista es montaña.
Jerry: Si el mes es marzo y la vista es laguna, si el mes es febrero y la vista es playa, o si el mes es enero y la vista es montaña.
Spike: Si el mes es febrero y la vista es laguna, si el mes es enero y la vista es playa, o si el mes es marzo y la vista es montaña.
-Convenciones:
Enero(E), febrero(F), marzo(X), playa(P), montaña (M), laguna (L).
  
  
  
  #include <stdio.h>
// Aquí deberias definir las constantes…

int main(){
    char epoca;
    char paisaje;
    scanf(" %c", &epoca);
    scanf(" %c", &paisaje);
    // Aqui va tu codigo donde deberias usar un switch…


	return 0;
}


8)
En Mansión Foster todos eran muy buenos amigos, hasta que por un pedido exhaustivo de parte de Queso (https://www.youtube.com/watch?v=ZAkwOumcWnw), se le terminó la paciencia a Blue. Para tener pruebas de lo ocurrido, Blue decidió contar la cantidad de veces que Queso hizo su pedido.

Imprimir por pantalla “Queso quiere leche con chocolate.”, sabiendo la cantidad total que contó Blue.
Ejemplo:

Si se recibe 4, debe imprimirse:
Queso quiere leche con chocolate.
Queso quiere leche con chocolate.
Queso quiere leche con chocolate.
Queso quiere leche con chocolate.
                 
												      
												      
#include <stdio.h>

int main(){
	int cantidad_queso;
	scanf("%i", &cantidad_queso);
	// Aqui va tu codigo donde deberias usar un while..

	return 0;
}
												      
												      
                                                                                                        
 9)
Blue cansado de Queso, decide dejarlo con otro amigo. Pero esto provoca una nueva discusión: A Queso le gusta el cereal, y a Eduardo le gustan las papas (https://www.youtube.com/watch?v=2srlEr7ybLk). Blue, sorprendido por la discusión, nuevamente decidió contar cuántas veces se repite el diálogo entre los dos.

Imprimir por pantalla esta discusión, sabiendo la cantidad total que contó Blue.
Ejemplo:

Si se recibe 2, debe imprimirse:
Me gusta el cereal.
A mi gustarme las papas.
Me gusta el cereal.
A mi gustarme las papas.



#include <stdio.h>

int main(){
	int veces_repetidas;
	scanf("%i", &veces_repetidas);
	// Aqui va tu codigo donde deberias usar un do while..

	return 0;
}




10)
Burbuja tiene que ir a combatir el mal y, por una situación, tiene que ir brincando. El problema es que no encuentra el pogo saltarín, por lo que tuvo que repetir la frase “Brinco, brinco brinco, y allá voy yo.” muchas veces.

Imprimir por pantalla la frase, según la cantidad de veces recibida que la dijo.
Ejemplo

Si se recibe 3, debe imprimirse:
Brinco, brinco brinco, y allá voy yo.
Brinco, brinco brinco, y allá voy yo.
Brinco, brinco brinco, y allá voy yo.
  
	
	
 #include <stdio.h>

int main(){
	int cantidad_repetidas;
	scanf("%i", &cantidad_repetidas);
	// Aqui va tu codigo donde deberias usar un for..

	return 0;
}
