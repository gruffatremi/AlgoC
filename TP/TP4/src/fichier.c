#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fichier.h"
int main() {

char message[100];

lire_fichier("message.txt");

printf("\n entre le message que tu veux\n");

scanf("%s",message);

ecrire_dans_fichier("message.txt",message);

return 0;

}
