// POUR FAIRE EN MODE MODULAIRE J4AI AUSSI CREE UN MAIN.C POUR METTRE LE CODE LE MAIN DEDANS
#include <stdio.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier)
{
    FILE *mon_fichier = NULL;
    int c;
    mon_fichier = fopen(nom_de_fichier,"r");// on ouvre le fichier dans mon_fichier en lecture seulement
    if(mon_fichier)
    {
        while((c = fgetc(mon_fichier)) != EOF)// tant qu'on arrive pas a la fin du fichier
        {
            printf("%c",c);// on afiche caractere par caractere
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
    mon_fichier = fopen(nom_de_fichier,"a");// on ouvre le fichier en mode append, ce qui veux dire que l'on écrit à la fin du fichier sans écraser l'existant
    if(mon_fichier)
    {
        fputs(message,mon_fichier);// on écrit le message a la fin du fichier
        fclose(mon_fichier);
    }
    else
    {
        printf("Erreur, le fichier ne peut pas être ouvert !\n");
    }
}


