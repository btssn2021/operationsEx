#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    //nombre alétoire C srand rand
    //initialisation du moteur alétoire avec srand
    srand(time(NULL));
    int nbaleatoire=rand()%9+1; //rencoi un nombre aléatoire entre 1 et 10 (non inclus)
    int proposition=0;
    printf("%d",nbaleatoire);


    //TODO proposition du joueur
    printf("Veuillez choisir un chiffre entre 1 et 9\n");
    scanf("%d",&proposition);

    if(isdigit((char)proposition)==0) {  //test si l'entier est bien nombre
        //TODO test si vrai ou faux
        if (nbaleatoire == proposition) {
            printf("Gagné!!");
        } else {
            printf("Perdu!");
        }

    }
    else
    {
        printf("Erreur de saisie");
    }
    return 0;
}
