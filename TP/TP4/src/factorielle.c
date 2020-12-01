#include <stdio.h>

int main() {
int choix ; 


unsigned long long int factorielle (unsigned long long int num) {
 if (num == 0) {
 return 1;
 }
 else {
 return (num * factorielle (num-1));
 }
}

printf("quel numero voulez vous mettre  ? ");
scanf("%d",&choix);

printf("%llu \n",factorielle(choix));

return (0);
}
