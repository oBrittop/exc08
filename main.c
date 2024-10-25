#include<stdio.h>
#include"nascimento.h"
#include"nascimento.c"


int main(void) {
    data_t data;
    int dias = 0;

    printf("Digite seu aniversario [Dia/Mes/Ano]:\n");
    scanf("%d%d%d", &data.dia, &data.mes, &data.ano);

    printf("Seu aniversario eh [%d/%d/%d]:\n", data.dia, data.mes, data.ano);

    dias = dias_de_vida(data);
    
    printf("Levando em consideracao todos os anos com 365 dias!\n Voce tem aproximadamente %d dias de vida.", dias);

    return 0;
}