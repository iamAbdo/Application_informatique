#include <stdio.h>

int main() {
    char message [1000]; // Définir une taille maximale pour le message int decalage;

    // Demander à l'utilisateur de saisir le message clair 
    printf("Entrez le message clair: ");
    scanf("%s", &message);

    // Demander à l'utilisateur de saisir le décalage 
    printf("Entrez le décalage (un entier positif): "); 
    scanf("%d", &decalage);
    
    // Chiffrer le message
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] +=decalage;
    }
    // Afficher le message chiffré
    printf("Message chiffré : %s\n", message);
    return 0;
}