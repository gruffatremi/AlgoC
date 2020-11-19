#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
int i,j;
int imin;
int compteur;
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
for (i=0; i  < 10 ; i++)
{
tab[i].rouge=(unsigned char) 15;

tab[i].vert=(unsigned char) 20;

tab[i].bleu=(unsigned char) 25;

tab[i].alpha=(unsigned char) 30;
}

for (i=0;i < 10;i++) 
{

printf("0x%x ",tab[i].rouge);
printf("0x%x ",tab[i].vert);
printf("0x%x ",tab[i].bleu);
printf("0x%x \n",tab[i].alpha);

}

for(i=0;i < 10;i++)
  {

 for(j=i+1 ; j < 10 ; j++ ){

if(tab[i].rouge == tab[j].rouge && tab[i].vert == tab[j].vert && tab[i].bleu == tab[j].bleu && tab[i].alpha == tab[j].alpha)

{
int tmp = i;
	if(i != tmp) 
printf("%x = %x %x = %x %x = %x %x = %x  \n",tab[i].rouge,tab[j].rouge, tab[i].vert, tab[j].vert, tab[i].bleu,tab[j].bleu, tab[i].alpha, tab[j].alpha);
compteur++;

}
}
}

printf("%d", compteur);
return 0;
}
