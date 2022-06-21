//Actividad 1
//Determinar el tipo de dato del resultado de las siguientes expresiones:
//1. (x>y)
//2. 1.0 + sin(x)
//3. (x=1)
//4. (x>=2)&&(z ==3)
//5. (x==1)
//6. (10 - 3% 8 + 6 / 4)
//7. ( (1 + 3% 2 + 6 * 4 )+2)
//8. (x=34) + 1
            a. bool
            b. double 
            c. int
            d. bool
            e. bool
            f. float
            g. int
            h. int
           
           
//Actividad 2
//Ingresar un valor entero desde el teclado y mostrar por pantalla el valor ingresado.
            
            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
               int numero;
               printf("Elija un numero\n");
               scanf ("%i",&numero);
               printf("Usted elijio el numero %i",numero);
               return 0;
            }


//Acrividad 3 y 4
//Desarrollar un algoritmo que permita leer dos numeros enteros por teclado y emitir los resultados de las siguientes
//operaciones:
//1. La suma de ambos.
//2. La resta del primero menos el segundo.
//3. La multiplicacion de ambos.

            #include <stdio.h>
            #include <stdlib.h>

            int main()
            {
               int numeroa;
               int numerob;
               int suma;
               int multi;
               int resta;
               printf("Elija un numero\n");
               scanf("%i",&numeroa);
               printf("Usted eligio el numero %i\n",numeroa);
               printf("Elija otro numero\n");
               scanf("%i",&numerob);
               printf("Usted eligio el numero %i\n",numerob);
               suma=numeroa+numerob;
               printf("La suma de ambos numeros es %i\n",suma);
               multi=numeroa*numerob;
               printf("La multiplicacion da %i\n",multi);
               resta=numeroa-numerob;
               printf("La resta es igual a %i\n",resta);
            }
