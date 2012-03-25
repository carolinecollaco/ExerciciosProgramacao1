#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char line [80];
    float valoremprestado;
    float taxadejuros;
    int totaldeprestacoes;
    float valordaprestacao;
    float taxamaisum;


    printf("Informe o valor emprestado:\n");
    gets (line);
    valoremprestado = atof(line);
    printf("Informe a taxa de juros na forma 0.00:\n");
    gets (line);
    taxadejuros = atof(line);
    printf("Informe o número total de prestações\n");
    gets (line);
    totaldeprestacoes = atof(line);

    taxamaisum = taxadejuros + 1;
    valordaprestacao = (valoremprestado*pow(taxamaisum,totaldeprestacoes)*taxadejuros)/(pow(taxamaisum,totaldeprestacoes)-1);

    printf("O valor da prestação será %.2f", valordaprestacao);

    return 0;
}
