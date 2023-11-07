//print the star pattern
//1. print triangular star pattern
//2. print reverse triangular star pattern
//take input from the user and ask them to choose 0 for triangular star pattern and 1 for
//reverse triangular star pattern
#include <stdio.h>

int main(){
    int r;
    int o;

    printf("Enter the no of rows:");
    scanf("%d", &r);

    // printf("Enter the no of columns:\n");
    // scanf("%d\n", &c);

    printf("0 - triangular star pattern.\n1 - reverse triangular star pattern.\n");
    scanf("%d", &o);

    if (o == 0)
    {
        for (int i = 1; i <= r; i++) 
        {
        for (int j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
        }
    }
    else{
        for (int i = r; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    
    return 0;
}