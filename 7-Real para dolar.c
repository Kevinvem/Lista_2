#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
float d, r;
printf("Informe qual é a cotação do dolar atualmente: ");
scanf("%f", &d);
printf("Informe o valor em real que deseja converter: ");
scanf("%f", &r);
printf("O resultado da conversão é de: %.2f", r/d);
return(0);
}
