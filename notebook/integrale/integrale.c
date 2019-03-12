#include <stdio.h>
#include <stdlib.h>

double func(double x);

double func(double x)
{
    return x * x;
}

/*
execution du programme:
 $ ./integrale.exe a b N
*/

int main(int argc, char *argv[])
{
    double I = 0.0; /* variable de resultat*/
    int i = 0;
    double a = 0.0;
    double b = 0.0;
    int N = 0;

    if (argc != 4)
    {
        printf("erreur: 3 arguments obligatoires!\n");
        exit(EXIT_FAILURE);
    }

    a = atof(argv[1]);
    b = atof(argv[2]);
    N = atoi(argv[3]);

    I = 0.0;
    for (i = 0; i < N; ++i) // pour i = 0, jusqu'a i=N-1:
    {
        double xi = a + i * (b - a) / N;
        double xip1 = a + (i + 1) * (b - a) / N;
        I = I + (xip1 - xi) * func(xi);
    }

    printf("I=%10.20g\n", I);

    return EXIT_SUCCESS;
}