//-------------------------------------------
//A. Thompson
//EGR 107 - 02
//S. Zuidema
//1/25/2020
//------------------------------------------
//This is an example of everything I learned in 106
//It doesn't actually do anything of use.
//-------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "polynomial.h"

int main()
{
    double Fprime, F, Area;
    int check, pass=0, fail=0;

    polynomial(1, 1, 1, 3, 3, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (1)(3)^2+(1)(3)+(1)

    printf("Does fPrime=7, f(x)=13, and Area=0\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

         polynomial(2, 2, 2, 2, 3, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (2)(2)^2+(2)(2)+(2)

    printf("Does fPrime=10, f(x)=14, and Area=19.7\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(1, 2, 3, 4, 5, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (1)(4)^2+(2)(4)+(3)

    printf("Does fPrime=10, f(x)=27, and Area=32.3\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(-1, 2, 3, 6, 5, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (-1)(6)^2+(2)(6)+(3)

    printf("Does fPrime=-10, f(x)=-21, and Area=16.3\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(5, 2, 3, 6, 5, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (5)(6)^2+(2)(6)+(3)

    printf("Does fPrime=62, f(x)=195, and Area=-166\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(3, 1.5, 2.1, 3, 4, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (3)(3)^2+(1.5)(6)+(2.1)

    printf("Does fPrime=19.5, f(x)=33.6, and Area=44.4\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(-1.6, 3, 1, 0, 2, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (-1.6)(0)^2+(3)(0)+(1)

    printf("Does fPrime=3, f(x)=1, and Area=3.73\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(-1.6, 3, 1, 2, 2, &Fprime, &F, &Area);
    printf("fPrime=%1g \t f(x)=%1g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (-1.6)(2)^2+(3)(2)+(1)

    printf("Does fPrime=-3.4, f(x)=0.6, and Area=0\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

                polynomial(1.6, 3, 1, 1.6, 2, &Fprime, &F, &Area);
    printf("fPrime=%.3g \t f(x)=%.3g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (1.6)(1.6)^2+(3)(1.6)+(1)

    printf("Does fPrime=8.12, f(x)=9.9, and Area=4.64\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;

        polynomial(0, 0, 0, 0, 0, &Fprime, &F, &Area);
    printf("fPrime=%.3g \t f(x)=%.3g \t Area=%.3g\n", Fprime, F, Area); // testing polynomial (0)(0)^2+(0)(0)+(0)

    printf("Does fPrime=0, f(x)=0, and Area=0\nif yes enter 1 \t if no enter 0\n");
    scanf("%d", &check);
    if(check == 1)
        pass++;
        else
        fail++;


        printf("Number of passes=%d \t Number of fails=%d", pass, fail); // Printing the number of passes and fails

    return 0;
}
