#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //nombre alétoire C srand rand
    //initilaisation du moteur alétoire avec srand
    srand(time(NULL));
    int nbaleatoire=rand()%10+1; //rencoi un nombre aléatoire entre 1 et 10
    printf("%d",nbaleatoire);
    return 0;
}
