#include <stdio.h>
#include <stdlib.h>

int main() {
int N=100;
int i,j,tab[N];
int min,imin,tmp;

for (i = 0; i < N; i++)
{
 tab[i] = rand() % 5000 + 1;
}

for(i=0;i <= N-1;i++)
  {
  imin=i;
  min=tab[i];

 for(j=i+1 ; j < N ; j++ ){

if(tab[j] < min)
{

min=tab[j];
imin=j;

}

}
tmp=tab[imin];
tab[imin]=tab[i];
tab[i]=tmp;
}


for(i=0;i<N;i++)
{

printf("%d \n", tab[i]);

}

int iRecherche;
int iPremier;
int iDernier;
int iMilieu;
int iTrouve;
int iFin=1;

while(iFin)
{

printf("quel est la valeur rechercher   ");
scanf("%d",&iRecherche);
iPremier = 0;
iDernier= N-1;
iTrouve=0;

while((iPremier <= iDernier) && (iTrouve==0)) {

iMilieu=(iPremier+iDernier)/2;

if(tab[iMilieu] == iRecherche) 
iTrouve = 1 ;

else 

if (tab[iMilieu] > iRecherche) 

iDernier = iMilieu -1 ;
     			       

else 

iPremier = iMilieu + 1;

}

if (!iTrouve) 

printf("cette valeur n'appartient pas à la liste \n");


else 

printf("Le chiffre %d appartient à la liste \n",iRecherche);

printf("Voulez-vous continuer ? (Taper 0 pour sortir du programme et 1 pour continuer) : ");
scanf("%d",&iFin); 
if(!isalpha(iFin)) iFin=0; 

}

return 0;

}





