#include <stdio.h>
#include <string.h>
int main() {
//definition d'une structure étudiant

struct etudiant{
char prenom[30];
char nom[30];
char addresse[30];;
short Prog_C;
short System_exploitation; 

};


//déclaration d'un étudiant

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


printf(" %s \n ", lafond.prenom);


return 0;

} 
