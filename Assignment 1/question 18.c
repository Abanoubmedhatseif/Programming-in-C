#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number=70;
    printf("enter number\n");
    scanf("%d",&number);

        for (int i=1;i<=number;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
}
