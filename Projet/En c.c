#include <stdio.h>
//Nafa Abdellah yahia mat:202031076002

// Fonction pour remplir le tableau avec des valeurs
void remplirTableau(float tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeur pour l'élément %d : ", i);
        scanf("%f", &tableau[i]);
    }
}

// Fonction pour calculer la somme des éléments dans le tableau
float calculerSomme(float tableau[], int taille) {
    float somme = 0.0;

    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }

    return somme;
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    float tableau[taille];

    // Appeler la fonction pour remplir le tableau
    remplirTableau(tableau, taille);

    // Appeler la fonction pour calculer la somme
    float somme = calculerSomme(tableau, taille);

    printf("La somme des éléments dans le tableau est : %.2f\n", somme);

    return 0;
}
