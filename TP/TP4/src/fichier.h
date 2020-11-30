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


void  ecrire_dans_fichier(char *nom_de_fichier, char *message) {
 int fd, count, size;
 //char content[] = message;

 fd = open(nom_de_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);
 size = write (fd,message,sizeof(message));
 close(fd);

}
