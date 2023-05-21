/*Em uma matriz 4 x 12, considere que cada linha representa um funcionário e cada coluna representa o valor 
(em milhares de reais) que esse funcionário recebeu de comissão por mês no ano.
A) Apresentar o total de comissão recebida no ano por um determinado funcionário informado pelo
usuário (número da linha);
B) Apresentar a maior comissão recebida, assim como o funcionário (número da linha) e o mês (número
da coluna) desta comissão.*/

#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    float m[4][12];
    float comissaofunc;
    float maior_comissao;
    int funcionario_buscar;
    int funcionario;
    int mes;

    // Seção de comandos
    
    // Entrada de dados: Adicionando as comissões dos funcionários
    for (int i = 0; i < 4; i++) { // Representa o total de funcionários
        for (int j = 0; j < 12; j++){ // Representa os meses do ano
            printf("Qual foi a comissão recebida pelo funcionário [%d][%d]:", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }  
    }

    // Entrada de dados: Comissão recebida no ano por um determinado funcionário
    printf("Qual funcionário deseja buscar: ");
    scanf("%d", &funcionario_buscar); // Busca a linha que representa o funcionário
    
    // Processamento 1: Armazenar quantos reaias o determinado funcionário recebeu
    
    int linha_buscar = funcionario_buscar - 1; // Deixa o valor de buscar de acordo com a matriz que começa em 0
    comissaofunc = 0.0; // Inicializa a var com valor nulo
    for (int j = 0; j < 12; j++){
        // Recebe todos valores da linha 
        comissaofunc += m[linha_buscar][j]; 
    }  
    
    // Processamento 2: Verificar qual funcionário recebeu maior comissão 
    
    maior_comissao = 0.0; // Inicializa a var com valor nulo
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 12; j++){
            if (m[i][j] > maior_comissao){
                maior_comissao = m[i][j];
                funcionario = i + 1; // Recebe qual funcionário teve a maior comissão
                mes = j + 1; // Recee o mês que ocorreu
            }
        }  
    }
    
    // Saída de dados
    
    // Funcionário buscado pelo usuário
    printf("O funcionário %d recebeu %.3f reais de comissão no ano\n", funcionario_buscar,comissaofunc);

    // Funcionário que recebeu a maior comissão e qual mês que ocorreu 
    printf("o funcionário %d recebeu a maior comissão de todo ano no mês %d (%.3f reais)\n", funcionario, mes, maior_comissao);

    // Tabela dos funcionários (matriz)
    printf("Tabela das comissões recebidas pelos funcionários: \n");
    for (int i = 0; i < 4; i++) { // Representa o total de funcionários
        printf("Funcionário %d: ", i + 1);
        for (int j = 0; j < 12; j++){ // Representa os meses do ano
            printf("%.1f ", m[i][j]);
        }  
        printf("\n");
    }

    // Indica o final do prorama
    printf("O programa foi executado com sucesso.\n");

    return 0;
}

