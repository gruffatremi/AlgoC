#include <stdio.h>

int main() {

char i, str1[50],str2[50];

printf("entrez votre chaine de caractere\n");
scanf("%s",str1);

for(i=0 ; str1[i] != '\0' ; i++ ) {

	str2[i]=str1[i];
}
str2[i]='\0';

printf("la chaine de base : %s\n",str1);
printf("la chaine copiée : %s\n" ,str2);
return 0;

}
