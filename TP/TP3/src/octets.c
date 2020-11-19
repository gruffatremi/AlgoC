#include <stdio.h>

int main() {
//short
int i ;
short sh = 32750;
short *sptr;
sptr=&sh;
//int
int a = 2129325802;
int *iptr;
iptr = &a;

//long int
long int li = 8929211925480730606;
long int *lptr;
lptr=&li;

//float 
float fl = 55.5;
float *fptr;
fptr=&fl;

//double
double d = 33.255;
double *dptr;
dptr=&d;

//long double
long double ld = 666.2365;
long double *ldptr;
ldptr=&ld;


//conversion du pointeur du type en un pointeur char
unsigned char *cptr;
cptr  = (unsigned char *)sptr;
//print du short
for (i = 0; i < sizeof(short); i++)
printf("%d eme octet = %x \n",i+1,*(cptr+i));

cptr = (unsigned char *)iptr;
//print de int 
printf("\n");
for (i = 0; i < sizeof(int); i++)
printf("%d eme octet = %x \n",i+1,*(cptr+i));

cptr = (unsigned char *)lptr;
//print de long int
printf("\n");   
for (i = 0; i < sizeof(long int); i++)
printf("%d eme octet = %x \n",i+1,*(cptr+i));

cptr = (unsigned char *)fptr;
//print de float
printf("\n");   
for (i = 0; i < sizeof(float); i++)
printf("%d eme octet = %x \n",i+1,*(cptr+i));


cptr = (unsigned char *)dptr;
//print de double
printf("\n");   
for (i = 0; i < sizeof(double); i++)
printf("%d eme octet = %x \n",i+1,*(cptr+i));


cptr = (unsigned char *)ldptr;
//print de double
printf("\n");   
for (i = 0; i < sizeof(long double); i++)
printf("%d eme octet = %x \n",i+1,*(cptr+i));



//print du chiffre
printf("SHORT = %d \n",*sptr);
printf("INT = %d \n",*iptr);
printf("LONG INT = %ld \n",*lptr);
printf("FLOAT = %f \n",*fptr);
printf("double = %f \n",*dptr);
printf("long double = %Lf \n",*ldptr);

// address memoire
//printf("%p \n",cptr);
//printf("%p \n",sptr);
//printf("%p \n",iptr);
// size of
//printf("%ld \n",sizeof(char));
//printf("I VAUT %ld \n",sizeof(i));


printf("short = %ld \n",sizeof(short));
printf("int  = %ld \n",sizeof(int));
printf("long int = %ld \n",sizeof(long int));
printf("float = %ld \n",sizeof(float));
printf("double = %ld \n",sizeof(double));
printf("long double = %ld \n",sizeof(long double));




return 0;

}

