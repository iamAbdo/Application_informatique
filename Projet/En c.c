#include <stdio.h>
//Nafa Abdellah yahia mat:202031076002

// Fonction pour calculer la somme des éléments dans un tableau de réels
float calculerSomme(float tableau[], int taille) {
    float somme = 0.0;

    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }

    return somme;
}

int main() {
    // Exemple d'utilisation
    float tableau[] = {1.5, 2.3, 4.0, 5.2, 7.8};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    //Stocker la somme dans un variable
    float somme = calculerSomme(tableau, taille);

    printf("La somme des éléments du tableau est : %.2f\n", somme);

    return 0;
}
