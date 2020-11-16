#include <stdio.h>
#include <stdlib.h>

int main() {
int N=100;
int i,j,tab[N];
int min,imin,tmp;

for (i = 0; i < N; i++)
{
 tab[i] = rand() % 100 + 1;
//printf("%d \n", tab[i]);
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


return 0;
}
