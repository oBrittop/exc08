#include<stdio.h>
#include"nascimento.h"

int dias_de_vida(data_t nasc) {
    int dias = 0;
    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    dias = nasc.dia + (2024 - nasc.ano) * 365;
        
    for (i = 1; i < nasc.mes; i++) {
        dias += dias_por_mes[i];
    }

    return dias;
    
}