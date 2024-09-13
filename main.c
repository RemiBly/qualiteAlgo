#include <stdio.h>
#include "liste.h"

int main() {

    lst maListe = creerListe();

    printf("Ajout de 10 en tête\n");
    ajouterEnTete(maListe, 10);
    afficherListe(maListe);

    printf("Ajout de 20 en tête\n");
    ajouterEnTete(maListe, 20);
    afficherListe(maListe);

    printf("Suppression de l'élément en tête\n");
    supprimerEnTete(maListe);
    afficherListe(maListe);

    supprimerListe(maListe);

    return 0;
}
