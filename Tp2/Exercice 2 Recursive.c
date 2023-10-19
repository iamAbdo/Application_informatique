//Exercice 2 : Calcul la somme d’un tableau
#include <stdio.h>

int sommeTab(int tab[], int taille) {
    //On démarre du fin au début parce que la fin n'est pas une constante, mais le début est toujours 0.
    if(taille == 0){
        return 0;
    }else {
        return tab[taille-1] + sommeTab(tab,taille-1);
    }
}

int main() {

    int tab[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tab) / sizeof(tab[0]); // on peut simplement faire taille = 5 mais sela est plus generale

    printf("somme = %d",sommeTab(tab,taille));
  
    return 0;
}
