
#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    do
    {
        printf("\n--- MENU ---");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Sum = %.2f", a + b);
                break;

            case 2:
                printf("Difference = %.2f", a - b);
                break;

            case 3:
                printf("Product = %.2f", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Division = %.2f", a / b);
                else
                    printf("Division by zero is not possible");
                break;

            case 5:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 5);

    return 0;
}
