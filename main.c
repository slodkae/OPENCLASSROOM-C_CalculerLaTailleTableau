#include <stdio.h>

int sommeTableau(int tableau[], int tailleTableau);
void affiche(int *tableau, int tailleTableau);

int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
    int somme = tableau[0] + tableau[1];
 
    // On affiche le contenu du tableau
    affiche(tableau, 4);

    printf("%d\n", somme);
    printf("%d\n", tableau[1]);
 
    return 0;
}

void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}
