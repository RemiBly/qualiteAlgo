#include <stdio.h>
#include <stdlib.h>
#include "liste.h"


lst creerListe() {
    lst l = (lst) malloc(sizeof(struct liste));
    l->debut = NULL;
    return l;
}

void supprimerListe(lst l) {
    struct maillon *courant = l->debut;
    while (courant != NULL) {
        struct maillon *tmp = courant;
        courant = courant->suivant;
        free(tmp);
    }
    free(l);
}

void ajouterEnTete(lst l, int x) {
    ml nouveau = (ml)malloc(sizeof(struct maillon));
    nouveau->val = x;
    nouveau->suivant = l->debut;
    l->debut = nouveau;
    l->nbElem++;
}

int supprimerEnTete(lst l) {
    ml tmp = l->debut;
    int val = tmp->val;
    l->debut = l->debut->suivant;
    free(tmp);
    l->nbElem--;

    return val;
}

void afficherListe(lst l) {
    ml courant = l->debut;
    printf("Liste: ");
    while (courant != NULL) {
        printf("%d, ", courant->val);
        courant = courant->suivant;
    }
    printf("NULL\n");
}
