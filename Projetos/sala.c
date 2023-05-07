#include <stdio.h>
/*Idade     Sala
0 a 2 anos Sala 1
3 a 5 anos Sala 2
6 a 8 anos Sala 3
9 a 10 anos Sala 4*/
int
main ()
{

  int idade;
  char nome[12];

  printf("Nome da criança: ");
  scanf("%s", nome);
  printf("Idade da criança: ");
  scanf("%d", &idade);
   
   if (idade <= 2) {
       printf("Para a criança %s de %d ano(s), a sala de aula é a Sala 1", nome, idade);
    }
   else if (idade <= 5) {
       printf("Para a criança %s de %d anos, a sala de aula é a Sala 2", nome, idade);
    }
   else if (idade <= 8) {
       printf("Para a criança %s de %d anos, a sala de aula é a Sala 3", nome, idade);
    }
   else if (idade <= 10){
        printf("Para a criança %s de %d anos, a sala de aula é a Sala 4", nome, idade);
    } 
   else { 
        printf("Idade invalida");
    }
   
  return 0;
}