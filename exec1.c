#include <stdio.h>

void numeros_pares(int inicio, int quantidade) {
    int numero = (inicio % 2 == 0) ? inicio + 2 : inicio + 1;
    int contador = 0;
    
    printf("Resposta: ");
    while (contador < quantidade) {
        printf("%d", numero);
        numero += 2;
        contador++;
        
        if (contador < quantidade) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int inicio, quantidade;
    
    printf("Digite o número inicial: ");
    scanf("%d", &inicio);
    
    printf("Digite a quantidade de números pares desejada: ");
    scanf("%d", &quantidade);
    
    numeros_pares(inicio, quantidade);
    
    return 0;
}
/* 
1º Define uma função numeros_pares que recebe o ponto de partida (inicio) e a quantidade de números pares desejada (quantidade).
2º Dentro da função, determina o primeiro número par após o ponto de partida usando um operador ternário.
3º Usa um loop while para gerar e imprimir a quantidade especificada de números pares.
4º Na função main, solicita ao usuário que digite o número inicial e a quantidade desejada.
5º Chama a função numeros_pares com os valores fornecidos.
6º Imprime os números pares separados por vírgulas, sem vírgula após o último número. 
*/
