#include <stdio.h>

int main() {
   float salario, prestacao;

   printf("Digite o sal�rio do trabalhador: ");
   scanf("%f", &salario);

   printf("Digite o valor da presta��o do empr�stimo: ");
   scanf("%f", &prestacao);

   if (prestacao > 0.2 * salario) {
      printf("Empr�stimo n�o concedido.");
   } else {
      printf("Empr�stimo concedido.");
   }

   return 0;
}

