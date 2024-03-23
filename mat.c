#include <stdio.h>
#include <stdlib.h>

double Eitken(double x, double x1, double x2, double a, double b)
{
    return ((a*(x-x1)-b*(x-x2))/(x2-x1));
}

int main()
{
    double xa = 2.56;
    double x[] = {1, 2, 3, 4};
    double Px[] = {1.000, 1.4142, 1.7321, 2.000};

   
    double P01 = Eitken(xa, x[1], x[0], Px[0], Px[1]);
    double P12 = Eitken(xa, x[2], x[1], Px[1], Px[2]);
    double P23 = Eitken(xa, x[3], x[2], Px[2], Px[3]);
    double P012 = Eitken(xa, x[2], x[0], P01, P12);
    double P123 = Eitken(xa, x[3], x[1], P12, P23);
    double P0123 = Eitken(xa, x[3], x[0], P012, P123);

    printf("P01 = %lf \nP12 = %lf \nP23 = %lf \nP012 = %lf \nP123 = %lf \nP0123 = %lf \n", P01, P12, P23, P012, P123, P0123);

    // FILE *out;

    // out = fopen("result.dat", "w");

    // for (int i = 0; i < 7; i++){
    //     fprintf(out, "%f %f\n", x[i], y[i]);
    // }
    return 0;
}