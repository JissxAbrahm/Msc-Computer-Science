
#include <stdio.h>

int main()
{
    int choice, a, b;

    do
    {
        printf("\n--- ELECTRONIC MENU ---");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Sum = %d", a + b);
                break;

            case 2:
                printf("Difference = %d", a - b);
                break;

            case 3:
                printf("Product = %d", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division = %.2f", (float)a / b);
                else
                    printf("Cannot divide by zero");
                break;

            case 5:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 5);

    return 0;
}
