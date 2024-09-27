#include <stdio.h>
/*se desea desarrollar un programa que me permita ingresar 6 calificaciones y encuentre 
la mayor la menor y el promedio de las calificaciones y las imprima
*/

int main (int argc, char *argv[]) {

    float nums[6] ;
    float min=10, max=0, prom=0;


    for (int i = 0; i < 6; i++)
    {
        printf("ingrese las calificaciones %d: ", i+1);
        scanf("%f", &nums[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (nums[i]>max)
        {
            max=nums[i];
        }
        if (nums[i]<min)
        {
            min=nums[i];
        }

        prom=prom+nums[i];

    }
    prom=prom/6;

    printf("La calificacion menor es :%.2f\n",min);
    printf("la calificacion mayor es :%.2f\n",max);
    printf("el promedio es : %.2f\n",prom);
    
    return 0;
}