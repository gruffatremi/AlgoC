#include <stdio.h>
#include <stdlib.h>
int main() {
int N=100;
int i,tab[N];
int val;
int trouve=0;
// on genere le tableau
for (i = 0; i < N; i++)
{
 tab[i] = rand() % 100 + 1;
//printf("%d \n", tab[i]);

}
// on recupere la donner utilisateur
printf("Entrez la valeur à rechercher dans le tableau ");
scanf("%d",&val);

for (i = 0; i < N; i++) 
{
//on cherche la valeur dans le tableau
if (val == tab[i]) {
trouve = 1;

printf(" %d est un entier présent \n",val);
// si on le trouve une fois pas besoin d'itérer plus longtemps le tableau
break;
}
}
// Boucle pour affiche si on ne le trouve pas
if (trouve == 0) 
printf(" %d n'est pas un entier présent \n",val);

return 0;
}
