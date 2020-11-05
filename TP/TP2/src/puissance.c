#include <stdio.h>



int i = 0;

int puissance(int a,int b){
//printf("%d",a);
int exp=a;

for (i=0 ; i < b-1 ; i++ ){
exp = exp * a;
//printf("%d",exp);

}

return exp;
}


int main() {

int a ; 
int b ;

printf("entez la valeur de a : "); 
scanf("%d",&a);

printf("entez la valeur de b : ");
scanf("%d",&b);

int exponentiel = puissance(a,b);
printf("%d\n", exponentiel);
return 0;
}
