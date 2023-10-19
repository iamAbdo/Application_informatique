//Exercice 2 : Calcul la somme d’un tableau
#include <stdio.h>

int sommeTab(int tab[], int taille) {
    int s = 0;
    for (int i = 0; i < taille; i++) {
        s += tab[i];
    }
    return s;
}

int main() {

    int tab[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tab) / sizeof(tab[0]); // on peut simplement faire taille = 5 mais sela est plus generale

    printf("somme = %d",sommeTab(tab,taille));
  
    return 0;
}
