#include <stdio.h>

int main() { 

//+ - x / => - *

  int soma = 10 + 2;
  int diferença = soma -2;
  int multiplicacao = 10 * soma;
  int divisao = (int) soma / 2.0f;
  int resto = soma % 2;

  //operador incremento/decremento
  printf("soma = %i\n", soma);
  printf("soma = %i\n", soma++); // soma = soma + 1;
  printf("soma = %i\n", soma);
  printf("soma = %i\n", ++soma) // soma = soma +1

    soma--; // soma = soma - 1;
  --soma;

  //operadores relacionais
  int menor_que = 1 < 0; // 0 - falso; 1 - verdadeiro
  int menor_que = 1 <= 0;
  int maior_que = 1 > 0;
  int maior_igual = 1 >= 0;
  int igual_a = 1 == 0;
  int diferente = 1 != 0;

  //operadores lógicos 
  int e = 0 < 1 && 1 < 10; // 0 < 1 < 10 ; 0 && ? = 0
  