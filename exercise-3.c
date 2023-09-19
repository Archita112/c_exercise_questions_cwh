//write a program for fibonacci series which is 0, 1, 1, 2, 3, 5, ....
//this problem should be done using recursions
//calculate fib 42 using iterative method and also recursive method

#include <stdio.h>

//recursive way to calculate fibonacci term of any number
int fib_recursive(int n){
    if (n == 0)
    {
        return n;
    }
    else if (n == 1 || n == 2)
    {
        return n;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    return 0;
}

int main()
{   
    int n;
    int i;
    printf("Enter the number of elements of fibonacci series:");
    scanf("%d", &i);

    //iterative way to print fibonacci series
    for (n = 0; n <= i; n++) {
      printf("%d\t\n", fib_recursive(n));
   }
    return 0;
}
