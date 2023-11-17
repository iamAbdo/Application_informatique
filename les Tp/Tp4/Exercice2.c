#include <stdio.h>
//Nafa Abdellah yahia mat:202031076002

void trouverCongruents(int a, int n) {
    printf("Entiers congruents à %d modulo %d dans l'intervalle [0, %d-1] :\n", a, n, n);
    
    for (int b = 0; b < n; b++) {
        if (a % n == b) {
            printf("%d ", b);
        }
    }
    printf("\n");
}

int main() {
    int a, n;

    // Demande à l'utilisateur de saisir les valeurs de a et n
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Appel de la fonction pour trouver les entiers congruents
    trouverCongruents(a, n);

    return 0;
}
