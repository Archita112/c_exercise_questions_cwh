//we have to reverse the given array using functions in c

#include <stdio.h>
int arr[] = {1, 2, 3, 4, 5, 6};
int n = sizeof(arr)/sizeof(arr[0]);

int array_rev(){
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - (i+1)];
        arr[n - (i+1)] = temp;
    }

    // for (int i = n/2; i < n; i++)
    // {
    //     arr[i] = arr[n - (i+1)];
    // }
    
    //printing the final array
    printf("The final array looks like:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

int main(){
    
    array_rev();
    return 0;
}