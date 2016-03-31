#include <stdio.h>
#include <stdlib.h>

int main()
{
    long choixOperation;
    double resultatAdd, nombreAdd1, nombreAdd2;
    double resultatSous, nombreSous1, nombreSous2;
    double resultatMult, nombreMult1, nombreMult2;
    double resultatDiv, nombreDiv1, nombreDiv2;
    printf (" ===Calculator===\n\n\n");
    printf (" Quel operation souhaitez vous faire ?\n\n");
    printf (" 1. Addition\n\n");
    printf (" 2. Soustraction\n\n");
    printf (" 3. Multiplication\n\n");
    printf (" 4. Division\n\n");
    scanf ("%ld", &choixOperation);

    switch (choixOperation)
    {
    case 1:
        printf ("\n 1er Nombre a Additioner\n");
        scanf ("%lf", &nombreAdd1);
        printf (" 2eme Nombre a Additioner\n");
        scanf ("%lf", &nombreAdd2);
        resultatAdd = nombreAdd1 + nombreAdd2;
        printf ("\n %lf + %lf = %lf\n", nombreAdd1, nombreAdd2, resultatAdd);
        printf ("\n\n Merci de votre Visite '_'");
        break;
    case 2:
        printf ("\n 1er Nombre a Soustraire\n");
        scanf ("%lf", &nombreSous1);
        printf (" 2eme Nombre a Soustraire\n");
        scanf ("%lf", &nombreSous2);
        resultatSous = nombreSous1 - nombreSous2;
        printf ("\n %lf - %lf = %lf\n", nombreSous1, nombreSous2, resultatSous);
        printf ("\n\n Merci de Votre Visite '_'");
        break;
    case 3:
        printf ("\n 1er Nombre a Multiplier.\n");
        scanf ("%lf", &nombreMult1);
        printf (" 2eme Nombre a Multiplier.\n");
        scanf ("%lf", &nombreMult2);
        resultatMult = nombreMult1 * nombreMult2;
        printf ("\n %lf * %lf = %lf\n",nombreMult1, nombreMult2, resultatMult);
        printf ("\n\n Merci de Votre Visite '_'");
        break;
    case 4:
        printf ("\n Nombre a Diviser.\n");
        scanf ("%lf", &nombreDiv1);
        printf (" Diviseur :\n");
        scanf ("%lf", &nombreDiv2);
        resultatDiv = nombreDiv1 / nombreDiv2;
        printf ("\n %lf / %lf = %lf\n", nombreDiv1, nombreDiv2, resultatDiv);
        printf ("\n\n Merci de Votre Visite '_'");
        break;
    }
    printf (" \n\n");
    system ("PAUSE");
    return 0;
}
