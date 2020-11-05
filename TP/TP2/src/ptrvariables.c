#include <stdio.h>

int main() {
char a='b';
char *pa=&a;
signed char b= -a;
signed char *pb = &b;
short c=150;
short *pc = &c;
signed short d= -c;
signed short *pd=&d;

int e=15000;
int *pe = &e;
signed int f= -e;
signed int *pf= &f;
long int g=15014;
long int *pg=&g;
signed long int h= -g;
signed long int *ph=&h;
long long int i=150175542124456151;
long long int *pi=&i;
signed long long int j= -i;
signed long long int *pj=&j;
float k=1.444;
float *pk=&k;

double l=2.551;
double *pl=&l;
long double m=1.57522242222;
long double *pm=&m;
printf("Avec unsigned char : %c\n  Avec signed char : %u \n  Avec unsigned short : %i \n  Avec signed short : %i \n   Avec unsigned int : %d \n  Avec signed int : %d \n  Avec unsigned long int : %ld \n  Avec signed long int : %ld \n Avec unsigned long long int : %lld \n  Avec signed long long int : %lld \n Avec float : %f\n  Avec double : %e \n Avec long double :  %Lf \n  ", *pa, *pb, *pc, *pd, *pe, *pf, *pg, *ph, *pi, *pj, *pk, *pl, *pm);
printf("Avec unsigned char : %p\n  Avec signed char : %p \n  Avec unsigned short : %p \n  Avec signed short : %p \n   Avec unsigned int : %p \n  Avec signed int : %p \n  Avec unsigned long int : %p \n  Avec signed long int : %p \n Avec unsigned long long int : %p \n  Avec signed long long int : %p \n Avec float : %p\n  Avec double : %p \n Avec long double :  %p\n  ", pa, pb, pc, pd, pe, pf, pg, ph, pi, pj, pk, pl, pm);
//printf("Avec unsigned char : %c\n  Avec signed char : %u \n  Avec unsigned short : %i \n  Avec signed short : %i \n   Avec unsigned int : %d \n  Avec signed int : %d \n  Avec unsigned long int : %ld \n  Avec signed long int : %ld \n Avec unsigned long long int : %lld \n  Avec signed long long int : %lld \n Avec float : %f\n  Avec double : %e \n Avec long double :  %Lf \n  ", pa, pb, pc, pd, pe, pf, pg, ph, pi, pj, pk, pl, pm);


 return 0;
}
