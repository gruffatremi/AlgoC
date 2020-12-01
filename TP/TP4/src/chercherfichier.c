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
			if (motEc[strlen(motEc)-1] == '\n')
			{
				ligne =  ligne +1;

			}


			char d[] = " ";
			char *p = strtok(motEc,d);
			while(p != NULL)
			{
				//p[strlen(p)-1]='\0';
				if (strstr(p,message) != 0)
				{
				count = count + 1;
				//printf(" COUNT = %d ",count);
				//printf(" P = %s ",p);  
				//printf("'%s'\n", p);
				}
			p = strtok(NULL, d);
			}
			//printf("mot trouvé %d fois Ligne %d \n",count,ligne);


			motEc[strlen(motEc)-1]='\0';

           //printf("MotEc =%s  message  =%s \n",motEc,message);
				/*   if (strstr(motEc,message) != 0)
				{
                count = count + 1;
                printf("mot trouvé %d fois Ligne %d \n",count,ligne);
                }*/
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

