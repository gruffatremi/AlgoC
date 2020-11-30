void lire_fichier(char *fichier) {

int fd, count, size;
char content;

fd = open (fichier,O_RDONLY);

while (1) {
size = read (fd,&content,1);
	if (size < 1) {
	break;
		      }
printf("%c",content);
	  }
close(fd);

}

/*
void  ecrire_dans_fichier(char *nom_de_fichier, char *message) {
 int fd, count, size;

 fd = open(nom_de_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);
 size = write (fd,message,sizeof(message));
 close(fd);

}
*/


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

