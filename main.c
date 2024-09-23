#include <stdio.h>
int main (int argc, char *argv []) {
 double num1, num2, sum, rest, mult, div;
 int op1=0, op2=0;
 printf ("ingrese el num1: ");
 sacnf("%lf", &num1);
 printf ("ingrese el num2: ");
 sacnf("%lf", &num2);
 printf("seleciona la operacion que desea realizar: \n");
 printf("1.suma\n2.Resta\n3.Multiplicacion\n4.Division");
 scanf("%d" &op1);

 switch (op1)
 {
 case 1:
  sum = num1 +num2;
    break;
 case 2:
  rest = num1 - num2;
    break;
 case 3:
  mult = num1 * num2;
    break;
 case 4:
 if (num2>2)
 {
    /* code */
 }
 
  div = num1 / num2;
    break;
    printf("No hay esta opcion")
    break;
 }
 return 0;
}