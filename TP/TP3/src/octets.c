#include <stdio.h>

int main() {

short sh = 32750;
short *sptr;
sptr=&sh;
unsigned char *cptr;
cptr  = (unsigned char *)sptr;

printf("%d \n",*cptr);
printf("%d \n",*sptr);

printf("%p \n",cptr);
printf("%p \n",sptr);


return 0;

}

