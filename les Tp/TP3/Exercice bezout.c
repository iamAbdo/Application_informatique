#include <stdio.h>

// Fonction pour calculer le PGCD de deux entiers a et b
int calculerPGCD(int a, int b) {
    // on divise jusque a le rest est 0
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Fonction pour calculer les coefficients x et y avec l'algorithme d'Euclide étendu
/* utilise les pointeurs car j'ai googler 'c return 2 values'
the result was :
1-By using pointers. seems the best in this case
2-By using structures.
3-By using Arrays.
*/
void euclideEtendu(int a, int b, int *x, int *y) {
    // work in progress
    *x=0;
    *y=0;
}


int main() {
    int a, b, pgcd, x, y;

    // Demande à l'utilisateur de saisir les valeurs de a et b
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    // Calcul du PGCD de a et b
    pgcd = calculerPGCD(a, b);

    // Calcul des coefficients x et y avec l'algorithme d'Euclide étendu
    euclideEtendu(a, b, &x, &y);

    // Affiche les résultats
    printf("PGCD(%d, %d) = %d\n", a, b, pgcd);
    printf("Coefficients x et y tels que %d*%d + %d*%d = %d\n", a, x, b, y, pgcd);

    return 0;
}
