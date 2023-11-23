#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char joueur1;
    char joueur2;
    int resultat_joueur1 = 0;
    int resultat_joueur2 = 0;
    while (resultat_joueur1 < 3 && resultat_joueur2 < 3) {
        printf("Joueur 1, Saisir ( C:ciseaux, P:pierre, F:feuille): ");
        scanf(" %c", &joueur1);
        printf("Joueur 2, Saisir ( C:ciseaux, P:pierre, F:feuille): ");
        scanf(" %c", &joueur2);
        if (joueur1 == joueur2) {
            printf("Egalite!\n");
        }
        else if ((joueur1 == 'C' && joueur2 == 'F') || (joueur1 == 'P' && joueur2 == 'C') || (joueur1 == 'F' && joueur2 == 'P')) {
            printf("Joueur 1 a gagne!\n");
            resultat_joueur1 = resultat_joueur1 + 1;
        }
        else if ((joueur1 == 'C' && joueur2 == 'P') || (joueur1 == 'P' && joueur2 == 'F') || (joueur1 == 'F' && joueur2 == 'C')) {
            printf("Joueur 2 a gagne!\n");
            resultat_joueur2 = resultat_joueur2 + 1;
        }
        else {
            printf("Erreur");
        }
    }
    if (resultat_joueur1 == 3) {
        printf("Le vainqueur est: Joueur 1\n");
    }
    else {
        printf("Le vainqueur est: Joueur 2\n");
    }
    return 0;
}