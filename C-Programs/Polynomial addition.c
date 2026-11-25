
#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
};

int main()
{
    struct poly p1[10], p2[10], p3[20];
    int n1, n2, n3 = 0;
    int i = 0, j = 0;

    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n1);

    printf("Enter coefficient and exponent:\n");
    for(i = 0; i < n1; i++)
        scanf("%d%d", &p1[i].coeff, &p1[i].exp);

    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &n2);

    printf("Enter coefficient and exponent:\n");
    for(i = 0; i < n2; i++)
        scanf("%d%d", &p2[i].coeff, &p2[i].exp);

    i = 0;
    j = 0;

    while(i < n1 && j < n2)
    {
        if(p1[i].exp == p2[j].exp)
        {
            p3[n3].coeff = p1[i].coeff + p2[j].coeff;
            p3[n3].exp = p1[i].exp;
            i++;
            j++;
            n3++;
        }
        else if(p1[i].exp > p2[j].exp)
        {
            p3[n3++] = p1[i++];
        }
        else
        {
            p3[n3++] = p2[j++];
        }
    }

    while(i < n1)
        p3[n3++] = p1[i++];

    while(j < n2)
        p3[n3++] = p2[j++];

    printf("Sum of polynomials: ");

    for(i = 0; i < n3; i++)
    {
        printf("%dx^%d", p3[i].coeff, p3[i].exp);

        if(i < n3 - 1)
            printf(" + ");
    }

    return 0;
}
