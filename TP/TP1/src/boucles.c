#include <stdio.h>
int main() { int i=0; int x=0; int compter ; printf("entrez la valeur du compteur "); scanf("%d",&compter); if(compter > 4) {
 for ( i = 0 ; i <= compter ; i++) {
		
		for ( x = 0 ; x < i ; x++ ) {
			
				if (x==0 || x==i-1 || i == compter ) {
				printf("*");
			    }
			
				else {
				printf("#");
				
					}
				}
printf("\n");
	}
}
return 0;
}
