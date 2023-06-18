// Seção de diretivas do pré-processador
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DESISTIU 4
#define JOGADA_REALIZADA 1
#define INVALIDA 0

// Imprime o tabuleiro após as jogadas
void tabuleiro_apos_jogada(char tabuleiro[8][8]){
  printf("\n  "); // Espaço em branco para alinhar com as colunas
  
  for (int i = 0; i < 8; i++) {
    printf("%d ", i + 1);
  }
  printf("\n");
  for (int i = 0; i < 8; i++) {
    printf("%d ", i + 1); 
    for (int j = 0; j < 8; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
   printf("\n");
}

// Saída de dados: Mostra as coordenadas, o total de pedras restantes e as eliminadas
void mostra_salto(int *o_l, int *o_c, int *d_l, int *d_c, int *pedras_salto, int *pedras_totais){
  int pedras_eliminadas = 48;
  *pedras_totais = *pedras_totais - *pedras_salto;
  pedras_eliminadas = pedras_eliminadas - *pedras_totais;
    
  printf("\nSalto de (%d,%d) para (%d,%d)",*o_l + 1,*o_c + 1,*d_l + 1, *d_c + 1);
  printf(", com %d pedra(s) eliminada(s) neste salto.\n", *pedras_salto);
  printf("%d pedras eliminadas; Restam %d pedras no tabuleiro.\n", pedras_eliminadas, *pedras_totais);
}

// Faz o salto depois da validação
void realizar_jogada(int *origem_linha, int *origem_coluna, int *destino_linha, int *destino_coluna,int lin, int col, char tabuleiro[lin][col], char pedra, char vazio, int *pedras_salto) {
  
  // Inicia a var
  *pedras_salto = -1;

  // Linhas e colunas que seram eliminadas
  int linha_remover = *origem_linha;
  int coluna_remover = *origem_coluna;

  // linha de origem maior e coluna de origem maior 
  if(*origem_linha > *destino_linha && *origem_coluna > *destino_coluna){
    while (linha_remover > *destino_linha && coluna_remover > *destino_coluna) {
      tabuleiro[linha_remover][coluna_remover] = vazio;
      linha_remover = linha_remover - 1;
      coluna_remover = coluna_remover - 1;
      *pedras_salto += 1;
    }
    // Move a pedra para o destino
    tabuleiro[*destino_linha][*destino_coluna] = pedra;
    
  } // linha de origem menor e coluna de origem menor
  else if (*origem_linha < *destino_linha && *origem_coluna < *destino_coluna){
    while (linha_remover < *destino_linha && coluna_remover < *destino_coluna) {
      tabuleiro[linha_remover][coluna_remover] = vazio;
      linha_remover = linha_remover + 1;
      coluna_remover = coluna_remover + 1;
      *pedras_salto += 1;
    }
    // Move a pedra para o destino
    tabuleiro[*destino_linha][*destino_coluna] = pedra;
    
  } // linha de origem menor e coluna de origem maior 
  else if (*origem_linha < *destino_linha && *origem_coluna > *destino_coluna){
    while (linha_remover < *destino_linha && coluna_remover > *destino_coluna) {
      tabuleiro[linha_remover][coluna_remover] = vazio;
      linha_remover = linha_remover + 1;
      coluna_remover = coluna_remover - 1;
      *pedras_salto += 1;
    }
    // Move a pedra para o destino
    tabuleiro[*destino_linha][*destino_coluna] = pedra;
    
  } // linha origem maior e coluna menor
  else if(*origem_linha > *destino_linha && *origem_coluna < *destino_coluna){
    while (linha_remover > *destino_linha && coluna_remover < *destino_coluna) {
      tabuleiro[linha_remover][coluna_remover] = vazio;
      linha_remover = linha_remover - 1;
      coluna_remover = coluna_remover + 1;
      *pedras_salto += 1;
    }
    // Move a pedra para o destino
    tabuleiro[*destino_linha][*destino_coluna] = pedra;
  }
}

// Faz todas os testes para ver se o salto é valido
int verificar_jogada_valida(int *origem_linha, int *origem_coluna, int *destino_linha, int *destino_coluna, int linhas, int colunas, char tabuleiro[linhas][colunas], char pedra, char vazio) {
  // Inicializo as variáveis com valor nulo

  // Linhas e colunas que seram eliminadas
  int linha_remover = *origem_linha;
  int coluna_remover = *origem_coluna;
  int l = 0; 
  int c = 0;
  
  if (*origem_linha < 0 || *origem_coluna < 0 || *destino_linha < 0 || *destino_coluna < 0) {
    printf("\nO jogador desistiu, ao digitar origem e/ou destino nulos.\n");
    return DESISTIU;
  }

  if (tabuleiro[*origem_linha][*origem_coluna] != pedra) {
    printf("Jogada inválida - a origem não contém uma pedra.\n\n");
    return INVALIDA;
  } 
  else if (tabuleiro[*destino_linha][*destino_coluna] != vazio) {
    printf("Jogada inválida - o destino não está vazio.\n\n");
    return INVALIDA;
  } 
  else if (abs(*destino_linha - *origem_linha) != abs(*destino_coluna - *origem_coluna)) {
    printf("Jogada inválida - o salto não é diagonal.\n\n");
    return INVALIDA;
  } 
  else if (abs(*destino_linha - *origem_linha) == 1 || abs(*destino_coluna -*origem_coluna) == 1) {
    printf("Jogada inválida - o salto deve eliminar pedras.\n\n");
    return INVALIDA;
  }
  else if(*origem_linha > *destino_linha && *origem_coluna > *destino_coluna){
    while (linha_remover > *destino_linha && coluna_remover > *destino_coluna) {
      if(tabuleiro[linha_remover][coluna_remover] != vazio){
        linha_remover = linha_remover - 1;
        coluna_remover = coluna_remover - 1;
      }
      else {
        printf("Jogada inválida - o salto não pode atravessar espaços vazios.\n\n");
        return INVALIDA;
        break; // serve para sair do loop
      }
    }
  } // linha de origem menor e coluna de origem menor
  else if (*origem_linha < *destino_linha && *origem_coluna < *destino_coluna){
    while (linha_remover < *destino_linha && coluna_remover < *destino_coluna) {
      if(tabuleiro[linha_remover][coluna_remover] != vazio){
        linha_remover = linha_remover + 1;
        coluna_remover = coluna_remover + 1;
      }
      else {
        printf("Jogada inválida - o salto não pode atravessar espaços vazios.\n\n");
        return INVALIDA;
        break;
      }
    }
    
  } // linha de origem menor e coluna de origem maior 
  else if (*origem_linha < *destino_linha && *origem_coluna > *destino_coluna){
    while (linha_remover < *destino_linha && coluna_remover > *destino_coluna) {
      if(tabuleiro[linha_remover][coluna_remover] != vazio){
        linha_remover = linha_remover + 1;
        coluna_remover = coluna_remover - 1;
      }
      else {
        printf("Jogada inválida - o salto não pode atravessar espaços vazios.\n\n");
        return INVALIDA;
        break;
      }
    }
  } // linha origem maior e coluna menor
  else if(*origem_linha > *destino_linha && *origem_coluna < *destino_coluna){
    while (linha_remover > *destino_linha && coluna_remover < *destino_coluna) {
      if(tabuleiro[linha_remover][coluna_remover] != vazio){
        linha_remover = linha_remover - 1;
        coluna_remover = coluna_remover + 1;
      }
      else {
        printf("Jogada inválida - o salto não pode atravessar espaços vazios.\n\n");
        return INVALIDA;
        break; 
      }
    }
  }
  // Não tem nenhum erro na jogada
  return JOGADA_REALIZADA;
}

// Arruma para ficar de acordo com a matriz que vai de 0 até 7 
void corrige_coordenada(int *origem_linha, int *origem_coluna, int *destino_linha, int *destino_coluna) {
  int corrige = 1;  // O valor a ser subtraído

  *origem_linha -= corrige;
  *origem_coluna -= corrige;
  *destino_linha -= corrige;
  *destino_coluna -= corrige;
}


// Recebe os valores para realizar o salto
void obter_coordenadas(int *origem_linha, int *origem_coluna, int *destino_linha, int *destino_coluna) {
  
  printf("Digite o salto da origem para o destino:\n");
  
  printf("Origem linha: ");
  scanf("%d", origem_linha);

  printf("Origem coluna: ");
  scanf("%d", origem_coluna);

  while(*origem_linha < 0 || *origem_linha > 8 || *origem_coluna < 0 || *origem_coluna > 8){
    printf("Jogada inválida - origem fora dos limites do tabuleiro.\n");
    printf("Origem linha: ");
    scanf("%d", origem_linha);

    printf("Origem coluna: ");
    scanf("%d", origem_coluna);
  }

  printf("Destino linha: ");
  scanf("%d", destino_linha);

  printf("Destino coluna: ");
  scanf("%d", destino_coluna);

  while (*destino_linha < 0 || *destino_linha > 8 || *destino_coluna < 0 || *destino_coluna > 8){
    printf("Jogada inválida - destino fora dos limites do tabuleiro.\n");
    printf("Destino linha: ");
    scanf("%d", destino_linha);

    printf("Destino coluna: ");
    scanf("%d", destino_coluna);
  }
}

// Faz a verificação de qual foi a dificuldade atingida
void dificuldade_antingida (int *pedras_restantes){
  int dificuldade_pedras = 48; // total de pedras 
  
  if((dificuldade_pedras - *pedras_restantes) <= 29) { 
    printf("Nível de dificuldade atingido: Extremamente fácil.\n");
  }
  else if ((dificuldade_pedras - *pedras_restantes) >= 30) { // Fácil: eliminar de 30 a 39 pedras; 
    printf("Nível de dificuldade atingido: fácil.\n");
  }
  else if ((dificuldade_pedras - *pedras_restantes) >= 40) { 
    printf("Nível de dificuldade atingido: difícil.\n");
  }
  else if ((dificuldade_pedras - *pedras_restantes) >= 47) {  
    printf("Nível de dificuldade atingido: Extremamente difícil.\n");
  }
}

// Tabuleiro sem jogada
void tabuleiro_inicial(char tabuleiro[8][8], char pedra, char vazio) {

  // Preenchendo a matriz com pedras e casas vazias
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if ((i >= 2 && i < 6) && (j >= 2 && j < 6)) {
        tabuleiro[i][j] = vazio;
      } else {
        tabuleiro[i][j] = pedra;
      }
    }
  }

  printf("\nTABULEIRO INICIAL\n\n");
 
  // Imprime o tabuleiro sem nenhuma jogada
  printf("  "); // Espaço em branco para alinhar com as colunas
  for (int i = 0; i < 8; i++) {
    printf("%d ", i + 1); // Linha horizontal numérica
  }
  printf("\n");
  for (int i = 0; i < 8; i++) {
    printf("%d ", i + 1); // Linha vertical numérica
    for (int j = 0; j < 8; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

// Apresenta como funciona o jogo e as regras
void explicar_jogo() {
  printf("\n1 - Regras que os saltos devem seguir:\n");
  printf("  a) Um salto consiste sempre em deslocar uma pedra qualquer para uma casa que esteja vazia;\n");
  printf("  b) Com a limitação de não poder fazer saltos duplos.\n");
  printf("  c) A casa de destino da pedra no salto deve estar na diagonal da sua casa de origem;\n");
  printf("  d) Para atingir a casa vazia, a pedra não pode passar por outras casas vazias.\n");
  printf("  e) Não é possível fazer saltos na horizontal, vertical e sobre casas vazias (-).\n\n");
  printf("- O jogo termina quando o jogador desiste ou quando não é possível fazer mais saltos.\n");
  printf("- Para desistir do jogo, digite 0 (Zero) como jogada para linha e/ou coluna.\n");
  printf("\n2 - O jogo possui os seguintes graus de dificuldade:\n");
  printf("  a) Extremamente fácil: eliminar até 29 pedras;\n");
  printf("  b) Fácil: eliminar de 30 a 39 pedras;\n");
  printf("  c) Difícil: eliminar de 40 a 44 pedras;\n");
  printf("  d) Extremamente difícil: eliminar de 45 a 47 pedras.\n");
}

int main() {
  
  // Declaração de Variáveis 
  char tabuleiro[8][8]; // Variável representando um tabuleiro
  char vazio = '-';  // Variável que simboliza os locais vazios no tabuleiro
  char pedra = '*';  // Variável simbolizando as pedras no tabuleiro
  char instru;  // Variável para receber se o usuário quer ver as instruções do jogo ou não
  char resposta; // Variável sentinela para repetir o programa ou não
  int jogada_valida; // Variável que recebe se a jogada foi válida ou não
  int pedras_totais = 48; // Total de pedras no tabuleiro inicial
  int pedras_salto; // Pedras elimandas no salto
  int origem_linha, origem_coluna; // Linha e coluna de origem para o salto
  int destino_linha, destino_coluna; // linha e coluna para o destino do salto
  
  do {
    
    // Mensagem de ínicio de jogo
    printf("\nBem-vindo ao Jogo da Eliminação das Pedras!\n");
    printf("O objetivo do jogo é eliminar o máximo possível de pedras (*) por meio de saltos na diagonal.\n");

    // Entrada de dados: Visualizar a regras
    printf("Deseja ver as instruções (s/n)? ");
    scanf(" %c", &instru);
    instru = tolower(instru);
    
    // Verifica a resposta
    while(instru != 's' && instru != 'n'){ 
      printf("Digite apenas (s/n): ");
      scanf(" %c", &instru);
      instru = tolower(instru);
    }
    
    // Mostra as regras ou não
    if (instru == 's'){
      explicar_jogo();
    }
    else {
      printf("Não haverá exibição das instruções.\n");
    }
  
    // Imprime o tabuleiro antes da primeira jogada
    tabuleiro_inicial(tabuleiro, pedra, vazio);
  
    // Loop que vai realizando todas as jogadas até acabar ou desistir
    int total_saltos = 0; // total de saltos feito pelo jogador
    jogada_valida = JOGADA_REALIZADA; // Valor positivo para entrar no loop 
    while (jogada_valida != DESISTIU){
      obter_coordenadas(&origem_linha, &origem_coluna, &destino_linha, &destino_coluna);
      
      // Chama procedimento que deixar os números de acordo com a matriz 
      corrige_coordenada(&origem_linha, &origem_coluna, &destino_linha, &destino_coluna);

      // Verifica todas as possibilidades de ser uma jogada inválida
      jogada_valida = verificar_jogada_valida(&origem_linha, &origem_coluna, &destino_linha, &destino_coluna, 8, 8, tabuleiro, pedra, vazio);
      
      if (jogada_valida == JOGADA_REALIZADA){
        realizar_jogada(&origem_linha, &origem_coluna, &destino_linha, &destino_coluna, 8, 8, tabuleiro, pedra, vazio, &pedras_salto);
        mostra_salto(&origem_linha, &origem_coluna, &destino_linha, &destino_coluna, &pedras_salto, &pedras_totais);
        total_saltos = total_saltos + 1; // Somente para jogadas válidas
      }
      else if (jogada_valida == INVALIDA){
        // Mensagem que indica que não teve salto
        printf("Salto não realizado.\n");
      }
      // Tabuleiro com as jogadas
      tabuleiro_apos_jogada(tabuleiro);      
      
    } 

    // Saída de dados: Resultados do jogo e dificuldade antingida
    
    printf("Total de saltos realizados: %d.\n", total_saltos);
    printf("Quantidade de pedras eliminadas %d.\n", (48 - pedras_totais));
    dificuldade_antingida(&pedras_totais);
    
    // Verifica se é o momento de sair do loop
    printf("\nDeseja jogar novamente? (s/n): ");
    scanf(" %c", &resposta);
    resposta = tolower(resposta);
    
    // Verifica a resposta
    while(resposta != 's' && resposta != 'n'){ 
      printf("Digite apenas (s/n): ");
      scanf(" %c", &resposta);
      resposta = tolower(resposta);
    }
  
    if (resposta == 'n') {
      printf("Obrigado por jogar, espero que tenha gostado :)\n");
      printf("Programa finalizado.\n");
    }
    pedras_totais = 48; // Reinicia as pedras no tabuleiro inicial (caso user desejar jogar novamente)
  } while (resposta == 's');
  
  return 0;
}
