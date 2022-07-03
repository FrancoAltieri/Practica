#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("El ingrediente faltante son muchos colores\n");

    return 0;
}
#include <stdio.h>
 int PELOS=78;

int main2(){
    int veces;
     scanf("%i",&veces);
    int producto;
     producto=veces*PELOS;
     printf("i% pelos",producto);

    return 0;
}
#include <stdio.h>
int RECETA=10;

int main3(){
    int asistentes;
    scanf("%i", &asistentes);
    int veces;
    veces=asistentes/RECETA;
    printf("%i veces",veces);

    return 0;
}

#include <stdio.h>

 char IZQUIERDA='I';
 char DERECHA='D'

int main(){
	char camino;
	scanf(" %c", &camino);

	if (camino=IZQUIERDA){
        printf(“Por la izquierda!\n”);
    }    
    else if(camino=DERECHA){
        printf(“Por la derecha!\n”);
	}
	else {
        printf(“Iiiieiii la encontré\n”);
	}
        

	return 0;
}

#include <stdio.h>
int MALDADES_NECESARIAS=15;

int main(){
	int cantidad_mandy;
	int cantidad_billy;
	scanf("%i", &cantidad_mandy);
	scanf("%i", &cantidad_billy);
	
	if (cantidad_mandy+cantidad_billy>=MALDADES_NECESARIAS){
        printf("Malditos demonios!!!\n");
	}
	else if (cantidad_billy+cantidad_mandy<MALDADES_NECESARIAS){
        printf(“Hoy no podrán conmigo\n”);
	}

	return 0;
}

#include <stdio.h>
 char FEBRERO='F';
 char ENERO='E';
 char MONTAÑA='M';
 char PLAYA='P';
 

int main(){
	char epoca;
	char paisaje;
	scanf(" %c", &epoca);
	scanf(" %c", &paisaje);
	
	if(epoca=ENERO)&&(paisaje=MONTAÑA)||(epoca=FEBRERO)&&(paisaje=PLAYA){
        printf("Tom\n");
	}
	else if(epoca=ENERO)&&(paisaje=PLAYA)||(epoca=FEBRERO)&&(paisaje=MONTAÑA){
        printf("Jerry\n");
	}
        

	return 0;
}

#include <stdio.h>
// a partir de aca pinchó
int main8(){
	int cantidad_queso;
	scanf("%i", &cantidad_queso);
	while (cantidad_queso)

	return 0;
}

#include <stdio.h>

int main9(){
	int veces_repetidas;
	scanf("%i", &veces_repetidas);
	do while

	return 0;
}

 #include <stdio.h>

int main10(){
	int cantidad_repetidas;
	scanf("%i", &cantidad_repetidas);
	int brinco=1;
	for (int=0)

	return 0;
}
