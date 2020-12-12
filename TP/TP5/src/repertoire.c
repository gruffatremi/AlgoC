#include <dirent.h> 
#include <stdio.h> 
#include <stdlib.h>
#include "repertoire.h"
#include <string.h>
int main(){

struct listRepertoire{
    struct listRepertoire* next;
    struct listRepertoire* last;
    char* name;
};


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


void lire_dossier_recursif(char *rep){
    struct dirent *de;
    DIR *dr = opendir(rep);
    if (dr == NULL)
    {
        printf("Could not open current directory" );
    }
    printf("\n");
    while ((de = readdir(dr)) != NULL){
        if(de->d_type == DT_DIR && strcmp(de->d_name,"..") != 0 && strcmp(de->d_name,".") != 0 && strcmp(de->d_name,".git") != 0 && strcmp(de->d_name,".idea") != 0){
            char * temp = malloc(strlen(rep) + strlen("/")+256); /* make space for the new string (should check the return value ...) */
            strcat(temp, rep);
            strcat(temp, "/");
            strcat(temp, de->d_name);
            printf("\n");
            printf("%s: \n", temp);
            lire_dossier_recursif(temp);
        }
        printf("%s ", de->d_name);
    }
    closedir(dr);
}
void lire_dossier_iteratif(char *rep){
    struct listRepertoire Rep = { NULL, NULL, rep};
    struct listRepertoire *curentRep = &Rep;
    printf("Début du parse %s \n", curentRep->name);
    while (curentRep != NULL) {
        DIR *dr = opendir(curentRep->name);
        struct dirent *de;
        if (dr == NULL)
        {
            printf("Could not open current directory" );
        }
        while ((de = readdir(dr)) != NULL) {
            if (de->d_type == DT_DIR && strcmp(de->d_name, "..") != 0 && strcmp(de->d_name, ".") != 0 &&
                strcmp(de->d_name, ".git") != 0 && strcmp(de->d_name, ".idea") != 0) {
                char *temp = malloc(strlen(rep) + strlen("/") +
                                    256); /* make space for the new string (should check the return value ...) */
                strcat(temp, rep);
                strcat(temp, "/");
                strcat(temp, de->d_name);
                printf("\n");
                printf("%s: \n", temp);
                lire_dossier_recursif(temp);
                struct listRepertoire* tempRep = { curentRep, NULL, temp};
                curentRep->last = tempRep;
            }
            printf("%s ", de->d_name);
        }
        curentRep = curentRep->next;
        closedir(dr);
    }
}


char *cheminD;

printf("Veuillez saisir le chemin du dossier: ");
scanf("%s", cheminD);

//lire_dossier(cheminD);
//lire_dossier_recursif(cheminD);
lire_dossier_iteratif(cheminD);

}
