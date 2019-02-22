#include <stdio.h>
#include <string.h>
#define n 5

struct inquilinos{
char nombre[30];
int departamento;
int cuartos;
float adeudo;

};
int main ()
{

int i;

struct inquilinos inq[n];

strcpy(inq[0].nombre,"ERANDI");
inq[0].departamento=16;
inq[0].cuartos=4;
inq[0].adeudo = 20182;

strcpy(inq[1].nombre,"Elif");
inq[1].departamento=14;
inq[1].cuartos=2;
inq[1].adeudo = 22;

strcpy(inq[2].nombre,"Andrea");
inq[2].departamento=10;
inq[2].cuartos=7;
inq[2].adeudo = 0;

strcpy(inq[3].nombre,"Ejais");
inq[3].departamento=12;
inq[3].cuartos=4;
inq[3].adeudo = 0;

strcpy(inq[4].nombre,"Vivia");
inq[4].departamento=17;
inq[4].cuartos= 3;
inq[4].adeudo = 2;


for(i=0; i<n; i++)
{
    if (inq[i].adeudo ==0 )
    printf ("Gracias por cumplir con tu pago\n");
    else
printf ("Hola %s, tu departamento es el numero %d con %d cuartos, tienes un adeudo de %3.2f\n", inq[i].nombre,inq[i].departamento, inq[i].cuartos, inq[i].adeudo);

}

return 0;
}

