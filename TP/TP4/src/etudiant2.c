
#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fichier.h"
int main() {
//definition d'une structure étudiant
/*
struct etudiant{
char prenom[30];
char nom[30];
char addresse[30];;
char prog_c[5];
char System_exploitation[5];

};
*/
char tmp[10];
int nbr,i;
char nom[10];
char prenom[10];
char address[50];
char prog_c[5];
char sys[5];
//déclaration d'un étudian

printf("combien d'eleve voulez vous");
scanf("%d",&nbr);

for (i=0 ; i < nbr ; i++) {

printf("Quel est votre nom ? ");
//fgets(prenom,sizeof prenom, stdin);
scanf("%s",prenom);
printf("prenom de l'étudiant : ");
//fgets(nom,sizeof nom, stdin);
scanf("%s",nom);
printf("address de l'étudiant : ");
//fgets(address,sizeof address, stdin);
int c;
while ( ((c = getchar()) != '\n') && c != EOF)
{
};
//fgets(tmp,sizeof tmp,stdin);
scanf("%[^\n]%*c",address);
printf("note de l'étudiant PROG: ");
//fgets(prog_c,sizeof prog_c, stdin);
scanf("%s",prog_c);
printf("note  de l'étudiant SYSTEM: ");
//fgets(sys,sizeof sys, stdin);
scanf("%s",sys);

ecrire_dans_fichier("etudiant.txt",prenom);
ecrire_dans_fichier("etudiant.txt",", ");

ecrire_dans_fichier("etudiant.txt",nom);
ecrire_dans_fichier("etudiant.txt",", ");


ecrire_dans_fichier("etudiant.txt",address);
ecrire_dans_fichier("etudiant.txt",", ");


ecrire_dans_fichier("etudiant.txt",sys);
ecrire_dans_fichier("etudiant.txt",", ");


ecrire_dans_fichier("etudiant.txt",sys);
ecrire_dans_fichier("etudiant.txt","\n");

}
/*
struct etudiant dupont;
strcpy(dupont.prenom, "Henry");
strcpy(dupont.nom, "Dupond");
strcpy(dupont.addresse, "5 Allé des mocassins");
dupont.Prog_C = 19;
dupont.System_exploitation = 6;

struct etudiant gruffat;
strcpy(gruffat.prenom, "Rémi");
strcpy(gruffat.nom, "Gruffat");
strcpy(gruffat.addresse, "53 rue du vatican");
gruffat.Prog_C = 5;
gruffat.System_exploitation = 6;

struct etudiant dumas;
strcpy(dumas.prenom, "Alexis");
strcpy(dumas.nom, "Dumas");
strcpy(dumas.addresse, "26 quartier des beaux affaires");
dupont.Prog_C = 20;
dupont.System_exploitation = 0;

struct etudiant messiah;
strcpy(messiah.prenom, "jean");
strcpy(messiah.nom, "Messiah");
strcpy(messiah.addresse, "89 allé de Paris");
messiah.Prog_C = 5;
messiah.System_exploitation = 15;

struct etudiant lafond;
strcpy(lafond.prenom, "Thierry");
strcpy(lafond.nom, "Lafond");
strcpy(lafond.addresse, "2 rue du poulidor");
lafond.Prog_C = 5;
lafond.System_exploitation = 9;


//printf(" %s \n ", lafond.prenom);



*/



return 0;

}

