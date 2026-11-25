
#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
};

int main()
{
    struct poly p[10];
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter coefficient and exponent:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d%d", &p[i].coeff, &p[i].exp);
    }

    printf("Polynomial is: ");

    for(i = 0; i < n; i++)
    {
        printf("%dx^%d", p[i].coeff, p[i].exp);

        if(i < n - 1)
            printf(" + ");
    }

    return 0;
}
