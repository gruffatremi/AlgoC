#include <stdio.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier)
{
    FILE *mon_fichier = NULL;
    int c;
    mon_fichier = fopen(nom_de_fichier,"r");
    if(mon_fichier)
    {
        while((c = fgetc(mon_fichier)) != EOF)
        {
            printf("%c",c);
        }
        fclose(mon_fichier);
    }
    else
    {
        printf("Erreur, le fichier ne peut pas être ouvert !\n");
    }
}


void ecrire_dans_fichier(char*nom_de_fichier, char *message)
{
    FILE *mon_fichier = NULL;
    mon_fichier = fopen(nom_de_fichier,"a");
    if(mon_fichier)
    {
        fputs(message,mon_fichier);
        fclose(mon_fichier);
    }
    else
    {
        printf("Erreur, le fichier ne peut pas être ouvert !\n");
    }
}

