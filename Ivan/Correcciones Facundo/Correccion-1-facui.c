Actividad 1
            a. bool
            b. double 
            c. int
            d. bool
            e. bool
            f. float
            g. int
            h. int
           
           
Actividad 2
            
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


Acrividad 3 y 4

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