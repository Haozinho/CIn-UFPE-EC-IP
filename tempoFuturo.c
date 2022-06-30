/*
Introdução à Programação (IP-EC) 2022-1
Atividade: Calculando tempo futuro

Descrição: Leia 3 números inteiros positivos (naturais): horas (h, entre 0 e 23)
minutos (m, entre 0 e 59) e acréscimo de tempo (a). Crie um programa em C que 
apresente o horário h:m acrescido dos minutos (de 0 a 59min) a. Por exemplo: 
lido 11:50h (como os inteiros 11 e 50) e 22min (como o inteiro 22), a saída 
apresentada deve ser 12:12h. Só use o material visto hoje.

*/

#include <stdio.h>

int main()
{
    int minutos, horas, maisHoras, resposta1, resposta2;
    
    printf("Digite a hora entre 0 e 23: ");
    scanf("%d", &horas);
    printf("Digite os minutos entre 0 e 59: ");
    scanf("%d", &minutos);
    printf("Digite quantos minutos para adicionar: ");
    scanf("%d", &maisHoras);
    
    resposta1 = ((horas * 60)+ minutos + maisHoras)/60;
    resposta2 = ((horas * 60)+ minutos + maisHoras)%60;

    
    printf("%d", resposta1);
    printf(":");
    printf("%d", resposta2);
}
