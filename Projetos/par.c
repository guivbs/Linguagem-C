/* algoritmo para mostrar todos os números pares do intervalo de 1 até um número positivo
fornecido pelo usuário. */

#include <stdio.h>

int main()
{
  // var declaration
  int num; // var aleatoria escolhida pelo user
  int par = 2; //declarando e inicializando a variável de controle par
  
  // data input
  printf("Digite um numero qualquer: ");
  scanf("%d", &num);
  
  // process and data output
  while (par <= num) // Testando a condição
  {
    printf("%d ", par); //Executando um comando dentro do laço
    // Somente valores pares
    par += 2; //atualizando a variável de controle
  }  

  return 0;
}