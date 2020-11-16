#include <stdio.h>
#include <stdlib.h>
int main() {
int i,y, tab2[100], tab[100];
int *pnt=tab;
int max=0;
for (i = 0; i < 100; i++) {

tab[i] = rand() % 1000 + 1;
printf("%d \n", tab[i]);
if (tab[i] > max) {
max=tab[i];
}
}
//printf("PNT EN SORTIE DE TABLEAU VAUT %d \n",*pnt);


int min=tab[0];
pnt=&tab[0];

//printf("tab de 0 VAUT %d",min);
for (y = 0; y < 100; y++) {

//printf("TAB DE Y VAUT %d + %d  \n", tab[y], y);
//printf("%d \n",min);
//printf("PNT VAUT %d \n",*pnt);

if (tab[y] < min) {
min=tab[y];
}
}


/*printf("==============================\n");
for (i = 0; i < 100; i++) {
tab2[i] = tab[i];
//printf("%d \t", tab[i]);

if (*pnt > *(pnt + i)) {
*pnt=*(pnt + i);
min=*pnt;
}
}
*/
printf (" le max est: %d\n", max);
printf (" le min est: %d\n", min);


return 0;
}
