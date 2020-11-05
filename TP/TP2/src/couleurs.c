#include <stdio.h>
#include <string.h>

int main() {

typedef struct rgba{
char rouge[5];
char vert[5];
char bleu[5];
char alpha[5];
}couleur;
couleur couleur1;
couleur couleur2;
couleur couleur3;
couleur couleur4;
couleur couleur5;
couleur couleur6;
couleur couleur7;
couleur couleur8;
couleur couleur9;
couleur couleur10;

couleur *tab[10];
tab[0]=&couleur1;
tab[1]=&couleur2;
tab[2]=&couleur3;
tab[3]=&couleur4;
tab[4]=&couleur5;
tab[5]=&couleur6;
tab[6]=&couleur7;
tab[7]=&couleur8;
tab[8]=&couleur9;
tab[9]=&couleur10;



strcpy(couleur1.rouge,"0x54");
strcpy(couleur1.vert,"0x56");
strcpy(couleur1.bleu,"0x78");
strcpy(couleur1.alpha,"0x88");

strcpy(couleur2.rouge,"0x54");
strcpy(couleur2.vert,"0x56");
strcpy(couleur2.bleu,"0x78");
strcpy(couleur2.alpha,"0x88");

strcpy(couleur3.rouge,"0x54");
strcpy(couleur3.vert,"0x56");
strcpy(couleur3.bleu,"0x78");
strcpy(couleur3.alpha,"0x88");

strcpy(couleur4.rouge,"0x54");
strcpy(couleur4.vert,"0x56");
strcpy(couleur4.bleu,"0x78");
strcpy(couleur4.alpha,"0x88");

strcpy(couleur5.rouge,"0x54");
strcpy(couleur5.vert,"0x56");
strcpy(couleur5.bleu,"0x78");
strcpy(couleur5.alpha,"0x88");

strcpy(couleur6.rouge,"0x54");
strcpy(couleur6.vert,"0x56");
strcpy(couleur6.bleu,"0x78");
strcpy(couleur6.alpha,"0x88");

strcpy(couleur7.rouge,"0x54");
strcpy(couleur7.vert,"0x56");
strcpy(couleur7.bleu,"0x78");
strcpy(couleur7.alpha,"0x88");

strcpy(couleur8.rouge,"0x54");
strcpy(couleur8.vert,"0x56");
strcpy(couleur8.bleu,"0x78");
strcpy(couleur8.alpha,"0x88");

strcpy(couleur9.rouge,"0x54");
strcpy(couleur9.vert,"0x56");
strcpy(couleur9.bleu,"0x78");
strcpy(couleur9.alpha,"0x88");

strcpy(couleur10.rouge,"0x54");
strcpy(couleur10.vert,"0x88");
strcpy(couleur10.bleu,"0x78");
strcpy(couleur10.alpha,"0x88");




printf("%s\n",tab[0]->rouge);
printf("%s\n",tab[9]->vert);

return 0;
}
