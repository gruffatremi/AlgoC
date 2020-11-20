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

/*
couleur couleur1;
couleur couleur2;
couleur couleur3;
couleur couleur4;
couleur couleur5;
couleur couleur6;
couleur couleur7;
couleur couleur8;
couleur couleur9;
couleur couleur10;
*/
couleur tab[100];
couleur tracker[100];


 for (i = 0; i  < 100 ; i++)
{
tab[i].rouge=(unsigned char) rand()%5;

tab[i].vert=(unsigned char) rand()%5;

tab[i].bleu=(unsigned char) rand()%5;

tab[i].alpha=(unsigned char) rand()%5;
}

/*
tab[0].rouge=(unsigned char) 255;

tab[0].vert=(unsigned char) 35;

tab[0].bleu=(unsigned char) 35;

tab[0].alpha=(unsigned char) 69;

tab[1].rouge=(unsigned char) 255;

tab[1].vert=(unsigned char) 0;

tab[1].bleu=(unsigned char) 35;

tab[1].alpha=(unsigned char) 18;

tab[2].rouge=(unsigned char) 255;

tab[2].vert=(unsigned char) 35;

tab[2].bleu=(unsigned char) 35;

tab[2].alpha=(unsigned char) 69;
*/

for(i=0 ;i < 100 ;i++)
{
	compt = 1;
	l=0;
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
 
// 	printf("on continue");

for( j=i+1 ; j < 100; j++ )
{
//	printf("rentre dans le for \n");


	   if (1 == exists)
	   {
 	   exists = 0; 
      			continue;
	   }


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
if ( i == l)
printf("0x%x 0x%x 0x%x 0x%x     %d  \n",tab[i].rouge,tab[i].vert,tab[i].bleu,tab[i].alpha, compt);

}
return 0;
}
