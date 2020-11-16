#include <stdio.h>
#include <stdlib.h>
int main() {
int N=100;
int i,tab[N];
int val;
for (i = 0; i < N; i++)
{
 tab[i] = rand() % 100 + 1;
printf("%d \n", tab[i]);

}

printf("Entrez la valeur à rechercher dans le tableau");
scanf("%d",&val);

for (i = 0; i < N; i++) 
{
if (val == tab[i]) 
{
printf("entier présent \n")  ;
break;
}


}





return 0;
}
