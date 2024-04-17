#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
float a, p;
printf("Informe sua altura: ");
scanf("%f", &a);
printf("Informe seu peso: ");
scanf("%f", &p);
printf("O seu IMC é de: %.2f", p/(a*a));
return(0);
}