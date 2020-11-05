#include <stdio.h>

int main() {

int U0 = 1;
int U1 = 1;
int Next; 
int i;
int n = 0;

printf("Entrez combien d'occurence de la suite de fibonnaci que vous voulez ");
scanf("%d",&n);

printf("1\n1\n");

for(i=0; i < n-2 ; i++ ) {

Next = U0+U1;

printf("%d\n",Next);

U0=U1;
U1=Next; 

}

return 0; 
}
