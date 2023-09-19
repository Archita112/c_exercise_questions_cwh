//write the program to print the multiplication table of a number entered by the user. 
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number you want to print multiplication table of:");
    scanf("%d", &n);

    for (int i = 0; i < 13; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}
