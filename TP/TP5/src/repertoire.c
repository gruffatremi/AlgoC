#include <dirent.h> 
#include <stdio.h> 
#include <stdlib.h>
#include "repertoire.h"

int main(){

void lire_dossier(char *cheminD)
{
    DIR *dossier = NULL;
    struct dirent *dir = NULL;// instancie une structure de type dirent
    dossier = opendir(cheminD);
    if (dossier != NULL) 
    {
        printf("Voici les fichiers et dossier dans  %s:\n", cheminD);
        while ((dir = readdir(dossier)) != NULL) 
        {
            printf("%s\n", dir->d_name); //On affiche le nom du fichier grace à la structure de dirent qui contient ce champ
        }

        closedir(dossier);
    }
}


char *cheminD;

printf("Veuillez saisir le chemin du dossier: ");
scanf("%s", cheminD);

lire_dossier(cheminD);



}
