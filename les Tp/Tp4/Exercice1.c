#include <stdio.h>
//Nafa Abdellah yahia mat:202031076002
int sontCongruents(int a, int b, int n) {
    return (a % n) == (b % n);
}

int main() {
    int a, b, n;

    // Demande à l'utilisateur de saisir les valeurs de a, b et n
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Vérifie si a et b sont congruents modulo n
    if (sontCongruents(a, b, n)) {
        printf("%d et %d sont congruents modulo %d.\n", a, b, n);
    } else {
        printf("%d et %d ne sont pas congruents modulo %d.\n", a, b, n);
    }

    return 0;
}
