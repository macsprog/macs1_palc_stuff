#include <stdio.h>
#include <stdlib.h>

double func(double x);

double calcul_integral(double xmin, double xmax, int nbPoints, double (*pF)(double))
{
    double I = 0.0;
    int i = 0;
    for (i = 0; i < nbPoints; ++i) // pour i = 0, jusqu'a i=N-1:
    {
        double xi = xmin + i * (xmax - xmin) / nbPoints;
        double xip1 = xmin + (i + 1) * (xmax - xmin) / nbPoints;
        I = I + (xip1 - xi) * (*pF)(xi);
    }
    return I;
}

double func(double x)
{
    return x * x;
}

/*
execution du programme:
 $ ./integrale_ptr.exe a b N
*/

int main(int argc, char *argv[])
{
    double I = 0.0; /* variable de resultat*/
    double a = 0.0;
    double b = 0.0;
    int N = 0;
    double (*pF)(double) = NULL;

    if (argc != 4)
    {
        printf("erreur: 3 arguments obligatoires!\n");
        exit(EXIT_FAILURE);
    }

    a = atof(argv[1]);
    b = atof(argv[2]);
    N = atoi(argv[3]);

    pF = &func; // ou pF = func
    I = calcul_integral(a, b, N, pF);

    printf("I=%10.20g\n", I);

    return EXIT_SUCCESS;
}