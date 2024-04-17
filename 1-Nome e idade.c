#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
char n[20];
int i;
printf("Informe seu nome: ");
scanf("%s", &n);
printf("Informe sua idade: ");
scanf("%i", &i);
printf("Olá %s você tem %i anos de idade", n,i);
return (0);
}