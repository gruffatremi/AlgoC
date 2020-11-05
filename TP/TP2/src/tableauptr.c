#include <stdio.h>
#include <stdlib.h>


int main() {
int n=10;
int i;
int rand();
int tabint[10];
float tabfloat[10];
int *tabi=tabint;
float *tabf=tabfloat;
for (i = 0 ; i < n ; i++) {

tabint[i] = rand() % 102;

if (i % 2 == 0 & i <= 8 ) {


printf("%d \n",*(tabi+i)*3);

}
}


for (i = 0 ; i < n ; i++) {

tabint[i] = rand() % 101;
tabfloat[i] = ((float)rand()/(float)(RAND_MAX)) * 100;
if (i % 2 == 0 & i <= 8 ) {


printf("%f \n",*(tabf+i)*3);

}


}
return 0;

}
