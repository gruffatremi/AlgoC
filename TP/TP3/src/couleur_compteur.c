#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
int i,j,l=0,k=0;
int exists;
int compt;
typedef struct rgba{
unsigned char rouge;
unsigned char vert;
unsigned char bleu;
unsigned char alpha;
}couleur;

couleur tab[100];
couleur tracker[100];

// on initialise le tableau
 for (i = 0; i  < 100 ; i++)
{
tab[i].rouge=(unsigned char) rand()%5;

tab[i].vert=(unsigned char) rand()%5;

tab[i].bleu=(unsigned char) rand()%5;

tab[i].alpha=(unsigned char) rand()%5;
}

for(i=0 ;i < 100 ;i++)
{
	compt = 1;
	l=0;
// on compare si 2 lignes sont identiques
	   while (l < 100)
	   {
	     if (tab[i].rouge == tab[l].rouge && tab[i].vert == tab[l].vert && tab[i].bleu == tab[l].bleu && tab[i].alpha == tab[l].alpha)
	    {
//		printf(" %d  =  %d \n ", i,l);
	    exists=1;
	    break;
	    }
	   l++;
	   }
 
for( j=i+1 ; j < 100; j++ )
{
//	printf("rentre dans le for \n");


	   if (1 == exists)
	   {
	//on reset la variable exist si jamais elle étais à 1
 	   exists = 0; 
      			continue;
	   }
// on compare l'entrée du tableau i à chaque indice de tout le tableau (j++)  et à chaque fois que l'on a une similitude, on incrémente

	if(tab[i].rouge == tab[j].rouge && tab[i].vert == tab[j].vert && tab[i].bleu == tab[j].bleu && tab[i].alpha == tab[j].alpha)
	{
		compt++;
	}

if (k < 100 ) {
tracker[k].rouge = tab[i].rouge;

tracker[k].vert = tab[i].vert;

tracker[k].bleu = tab[i].bleu;

tracker[k].alpha = tab[i].alpha;

k++;
}
	}

// on affiche les occurence 
if ( i == l)
printf("0x%x 0x%x 0x%x 0x%x     %d  \n",tab[i].rouge,tab[i].vert,tab[i].bleu,tab[i].alpha, compt);

}
return 0;
}
