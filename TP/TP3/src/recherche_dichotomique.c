#include <stdio.h>
#include <stdlib.h>

int main() {
int N=100;
int i,j,tab[N];
int min,imin,tmp;
// init tab
for (i = 0; i < N; i++)
{
 tab[i] = rand() % 5000 + 1;
}
// algo de tri du tableau
for(i=0;i <= N-1;i++)
  {
// on associe la valeur du tableau et son indice au valeur min
  imin=i;
  min=tab[i];

 for(j=i+1 ; j < N ; j++ ){
// on compare si la valeur d'avant est plus grande ce celle de maintenant, si on on la remplace par la valeur de mtn avec son indice
if(tab[j] < min)
{

min=tab[j];
imin=j;

}

}
// on echange les valeurs
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
// on coupee le tableau à la valeur du milieu
iMilieu=(iPremier+iDernier)/2;
// on regarde à l'indice du mileu si c'est le bon chiffre
if(tab[iMilieu] == iRecherche) 
iTrouve = 1 ;

else 
// si la valeur recherche est plus petite alors la borne  superieur deviens  inférieur au milieu
if (tab[iMilieu] > iRecherche) 

iDernier = iMilieu -1 ;
     			       

else 
// sinon c'est l'inverse pour la borne inférieur
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





