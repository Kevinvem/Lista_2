#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
float vh, ht, pd, sb;
printf("Qual o valor da hora? ");
scanf("%f", &vh);
printf("Qual o número de horas trabalhadas?");
scanf("%f", &ht);
printf("Qual o percentual de desconto do INSS?");
scanf("%f", &pd);
sb = vh * ht;
printf("O salario líquido é de: %.2f", sb - ((pd/100)*sb));
return(0);
}

