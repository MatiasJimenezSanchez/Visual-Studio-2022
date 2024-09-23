#include <stdio.h>

int main()
{
    int cont;
    int opr = 0;
    float n1;
    float n2;
    float res;

    do
    {
        while(!(opr < 5 && opr > 0))
        {
            printf("Seleccione la operacion 1: Multiplicacion, 2: Division, 3: Suma, 4: Resta\n");
            scanf("%d", &opr);
        }

        printf("Ingrese el primer digito\n");
        scanf("%f", &n1);
        
        printf("Ingrese el segundo digito\n");
        scanf("%f", &n2);


        switch (opr)
        {
            case 1:
                res = n1 * n2;
                break;
            case 2:
                res = n1 / n2;
                break;
            case 3:
                res = n1 +n2 ;
                break;
            case 4:
                res = n1 - n2;
                break; 
        }

        printf("El resultado es: %f\n", res);

        printf("Desea continuar? 0: No, 1: Si, 2: Tal vez\n");
        scanf("%d", cont);
    } while (cont == 1);
    


    
}