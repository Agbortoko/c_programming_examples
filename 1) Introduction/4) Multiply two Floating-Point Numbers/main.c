#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, product;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    //Calculating Product
    product = a * b;

    // %.2lf displays number up to 2 decimal places
    printf("Product = %.2lf", product);

    return 0;
}
