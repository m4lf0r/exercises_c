#include <stdio.h>

int main ()
{


int num;

printf("Digite um numero:");
scanf("%d",&num);
while (num!=0)

{

printf ("O numero lido foi = %d\n ",num);
printf ("Digite um numero: ");
scanf("%d",&num);

}
return 0;
}
