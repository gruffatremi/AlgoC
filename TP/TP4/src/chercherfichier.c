#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv) {


void chercher_fichier(char *nom_de_fichier,char *message)
{
    FILE *mon_fichier = NULL;
    int ligne=0;
    char motEc[300];
    mon_fichier = fopen(nom_de_fichier,"r");
    if(mon_fichier)
    {
        while((fgets(motEc,sizeof(motEc)-1,mon_fichier)) != NULL)
        {
			int count = 0;
			if (motEc[strlen(motEc)-1] == '\n') // on compte le nombre de ligne
			{
				ligne =  ligne +1;

			}


			char d[] = " ";
			char *p = strtok(motEc,d); // on découpe la ligne en plusieur mot avec comme caractere de séparation "espace"
			while(p != NULL)
			{
				if (strstr(p,message) != 0)//si c'est vrai alors le mot est identtique, on incrémente
				{
				count = count + 1;
				}
			p = strtok(NULL, d);
			}
			motEc[strlen(motEc)-1]='\0';

          	if ( count != 0 )// on affiche que les lignes pour lesquelles le mot à été trouvé 
        	printf("Ligne %d, %d fois \n",ligne,count);
	}

        fclose(mon_fichier);
    }
    else
    {
        printf("Erreur, le fichier ne peut pas être ouvert !\n");
    }
}


char *fichier = argv[2];
char *message = argv[1];

chercher_fichier(fichier,message);


return (0);
}

