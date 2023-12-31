#include <stdio.h> 
#include <string.h> 
#include <ctype.h>

int main() {
    char mot de passe[50]; // Déclaration d'un tableau pour stocker le mot de passe int longueur, majuscule, minuscule 0, chiffre 0, special 0;
    int longueur, majuscule = 0, minuscule = 0, chiffre = 0, special = 0;
    // Demander à l'utilisateur de saisir un mot de passe
    printf("Entrez un mot de passe: ");
    scanf("%s", &mot_de_passe); // Lire le mot de passe depuis l'entrée standard (clavier) 
    longueur = strlen(mot_de_passe); // Calculer la longueur du mot de passe

    // Vérifier les caractéristiques du mot de passe en parcourant chaque caractère 
    for (int i=0; i< longueur; i++) {
        if (isupper (mot_de_passe[1])) {
            majuscule = 1; // Si une lettre majuscule est trouvée, définir la variable majuscule à 1
        } 
        if (islower (mot_de_passe[i])) {
            minuscule = 1; // Si une lettre minuscule est trouvée, définir la variable minuscule à 1
        }
        if (isdigit(mot_de_passe[i])) {
            chiffre = 1; // Si un chiffre est trouvé, définir la variable chiffre à 1
        }
        if (strchr("!@#$%^&*()_+[]{} ]; ':\", .<?/\\", mot de passe[i])) {
            special = 1; // Si un caractère spécial est trouvé, définir la variable special à 1
        }
    }

    // Vérifier si le mot de passe est sécurisé en utilisant les variables booléennes définies précédennent 
    if (longueur >= 8 && majuscule && minuscule && chiffre && special) {
        printf("Le mot de passe est sécurisé.\n");
    } else {
        printf("Le mot de passe n'est pas sécurisé.\n");
        printf("Raisons :\n");
        if (longueur <8) {
            printf("- Le mot de passe doit comporter au moins 8 caractères.\n");
        }
        if (!majuscule) {
            printf("- Le mot de passe doit contenir au moins une lettre majuscule.\n");
        }
        if (!minuscule) {
            printf(" Le mot de passe doit contenir au moins une lettre minuscule.\n");
        }
        if (!chiffre) {
            printf(" Le mot de passe doit contenir au moins un chiffre.\n");
        }
        if (special) {
            printf(" Le mot de passe doit contenir au moins un caractère spécial.\n");
        }
    }
    return 0;
}

