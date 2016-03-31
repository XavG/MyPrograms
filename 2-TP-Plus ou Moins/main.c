#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{

    long nombreDonner = 0, nombreMystere = 0, nombreJoueur = 0, nivo = 0, MAX = 100, MIN = 1;
    long continuerParti = 0;

    do
    {
    long coup = 0;
    printf (" Choissisez votre niveau.\n\n 1. Chiffre entre 0 et 100.\n 2. Chiffre entre 0 et 1000.\n 3. Chiffre entre 0 et 10000.\n");
    scanf ("%ld", &nivo);
        if (nivo == 1)
        {
            int MAX = 100;
        }
        else if (nivo == 2)
        {
            int MAX = 1000;
        }
        else
        {
            int MAX = 10000;
        }
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf ("Choissisez votre mode de Jeu\n\n Mode un Joueur .1\n Mode deux Joueurs .2\n");
    scanf ("%ld", &nombreJoueur);
    if (nombreJoueur == 1)
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    else
    {    printf("\n\n Jouer 1 tapez le nombre mystere\n que le joueur 2 devra trouvez.(entier positif 0< x <100)\n");
        scanf ("%ld", &nombreMystere);
    }
        printf ("\n\n  ***Regle du Jeu***\n\n\n");
        printf (" Les regles sont simple, vous devez trouver le nombre Mystere, en moins de coup possible,\n ce nombre est un nombre entier positif.\n A vous de Jouer !!\n\n");

        do
        {
            printf(" Quel est le Nombre ? ");
            scanf ("%ld", &nombreDonner);
            coup++;

        if (nombreMystere > nombreDonner)
            printf("\n C'est Plus !\n\n");
        else if (nombreMystere < nombreDonner)
            printf("\n C'est Moins !\n\n");
        else
            printf("\n Bravo !! Vous avez trouvez le nombre Mystere en %ld coups!\n\n", coup);
        } while (nombreDonner != nombreMystere);
        printf ("Voulez vous refaire une partie ?\n\n 1. Pour Oui\n 2.Pour non\n");
        scanf ("%ld", &continuerParti);
    } while (continuerParti == 1);
    system ("PAUSE");
    return 0;
}
