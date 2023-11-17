#include <stdio.h>
#include <stdbool.h> // pour bool et true false
// etudiant : Nafa Abdellah yahia mat: 202031076002


bool croissant(int tab[], int taille) {
    for (int i = 1; i < taille; i++) {
        if (tab[i] < tab[i - 1]) {
            return false; // La suite n'est pas croissante
        }
    }
    return true; // La suite est croissante
}


int main() {
    
    int tab[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tab) / sizeof(tab[0]);
    
    if (croissant(tab,taille)){
        printf("La suite est croissante\n");
    }else {
        printf("La suite n'est pas croissante\n");
    }

    return 0;
}
