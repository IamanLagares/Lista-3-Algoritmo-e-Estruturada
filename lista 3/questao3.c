#include <stdio.h>

int main() {
   int num;

   printf("Digite um n�mero inteiro: ");
   scanf("%d", &num);

   if (num % 2 == 0) {
      printf("%d � um n�mero par", num);
   } else {
      printf("%d � um n�mero �mpar", num);
   }

   return 0;
}

