#include <stdio.h>

int main(){
int i,y;
char util[100];
char *tab[10];
char phrase[100]= "salut";
char phrase1[100]= "Bonjour";
char phrase2[100] = "YOYO";
tab[0] = phrase;
tab[1] = phrase1;
tab[2] = phrase2;

printf(" Rentrez votre chaine de character ");
scanf("%s",util);
// on parcours nous tableau
for (y=0; y < 3 ; y++) {


int flag = 1;

for (i=0 ; util[i] != '\0' ; i++) {
// on parcours le tableau à l'indice i pour chaque caracter
	if (util[i] != tab[y][i]){

	flag=0;
	break;
				}
		}
if (flag == 1)
printf("La phrase est présente \n");

}

return (0);

}
