#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, n, i, basic, hra, da, pf, netsal, A, B, C;
    int choice;
    printf("\n1. Interest \n2. netsal");
    printf("\nEnter the value of choice:>>\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        {
            printf("Enter the value P:\n");
            scanf("%f", &p);
            printf("Enter the value R:\n");
            scanf("%f", &r);
            printf("Enter the value N:\n");
            scanf("%f", &n);
            i=p*r*n/100;
            printf("Interest::%f", i);
            break;
        }
        case 2:
        {
            printf("Enter the value of basic:\n");
            scanf("%f", &basic);
            printf("Enter the value A:\n");
            scanf("%f", &A);
            printf("Enter the value B:\n");
            scanf("%f", &B);
            printf("Enter the value C:\n");
            scanf("%f", &C);
            hra=basic*A;
            da=basic*B;
            pf=basic*C;
            netsal=basic+hra+da+pf;
            printf("Net Salary:%f", netsal);
            break;
        }
        default:
        {
            printf("Invalid Choice");
        }
        return 0;
    }
        
}