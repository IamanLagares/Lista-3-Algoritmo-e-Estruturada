#include <stdio.h>
#include <math.h>

int main() {
   float num;

   printf("Digite um n�mero: ");
   scanf("%f", &num);

   if (num > 0) {
      float quadrado = pow(num, 2);
      float raiz_quadrada = sqrt(num);
      printf("N�mero ao quadrado: %.2f\n", quadrado);
      printf("Raiz quadrada do n�mero: %.2f\n", raiz_quadrada);
   }

   return 0;
}

