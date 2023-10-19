#include <stdio.h>
#include <stdbool.h>
// etudiant : Nafa Abdellah yahia mat: 202031076002

bool croissant(int tab[], int taille) {
    //On démarre du fin au début parce que la fin n'est pas une constante, mais le début est toujours 0.
    if (taille <= 1){ //On arrête ici car on peut pas comparer tab[0] avec tab[-1]
        return true; // La suite est croissante
    }
    if(tab[taille-1]<tab[taille-2]){
        return false; // La suite n'est pas croissante
    }
    
    return croissant(tab,taille-1);
    
}


int main() {
    
    int tab[] = {4, 2, 3, 4, 5};
    int taille = sizeof(tab) / sizeof(tab[0]);
    
    if (croissant(tab,taille)){
        printf("La suite est croissante\n");
    }else {
        printf("La suite n'est pas croissante\n");
    }

    return 0;
}
