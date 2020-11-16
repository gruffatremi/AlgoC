#include <stdio.h>
#include <stdlib.h>
int main() {
int i, max, min, y, tab2[100], tab[100];
int *pnt=tab;
for (i = 0; i < 100; i++) {
tab[i] = rand() % 100 + 1;
printf("%d \t", tab[i]);
if (*pnt < *(pnt + i)) {
*pnt=*(pnt + i);
max=*pnt;
}
}
printf("==============================\n");
for (y = 0; y < 100; y++) {
// tab2[i] = tab[i];
// printf("%d \t", tab[i]);

if (*pnt > *(pnt + y)) {
*pnt=*(pnt + y);
min=*pnt;
}
}

printf (" le max est: %d\n", max);
printf (" le nim est: %d\n", min);


return 0;
}
