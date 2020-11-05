#include <stdio.h>
int main()
{
  int n, c, k;
int tableau[16];
  printf("Entrez votre nombre décimal\n");
  scanf("%d", &n);

  printf("%d en binaire est:\n", n);

  for (c = 16; c >= 0; c--)
  {
    k = n >> c;
//printf("%d\n",k);
    if (k & 1) {
      printf("1");
      tableau[c]=1;
}
    else {
      printf("0");
      tableau[c]=0;
        }
  }
printf("\n");
}
