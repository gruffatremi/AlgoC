#include <stdio.h>

int main() {
char a='a';
signed char b= -a;

short c=150;
signed short d= -c;

int e=15000;
signed int f= -e;

long int g=15014;
signed long int h= -g;

long long int i=150175542124456151;
signed long long int j= -i;

float k=1.444;

double l=2.551;

long double m=1.57522242222;

printf("Avec unsigned char : %c\n  Avec signed char : %u \n  Avec unsigned short : %i \n  Avec signed short : %i \n   Avec unsigned int : %d \n  Avec signed int : %d \n  Avec unsigned long int : %ld \n  Avec signed long int : %ld \n Avec unsigned long long int : %lld \n  Avec signed long long int : %lld \n Avec float : %f\n  Avec double : %e \n Avec long double :  %Lf \n  ", a, b, c, d, e, f, g, h, i, j, k, l, m);

 return 0;
}
