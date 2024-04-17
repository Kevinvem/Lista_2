#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int n1,n2;
printf("Informe o primeiro número: ");
scanf("%i", & n1);
printf("Informe o segundo número");
scanf("%i", & n2);
printf("O quadrado do primeiro número é: %i\n", n1*n1);
printf("O cubo do segundo número é: %i", n2*n2*n2);
return(0);
}
