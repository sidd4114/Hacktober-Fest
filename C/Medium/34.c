// Complete the code to calculate the sum of elements in the array. 

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum =0 ;  
    int n = 5;
    
    for (int i =0;i<n;i++ ) {  // Fill in the blank to complete the for loop
        sum+= arr[i]; 
    }
    
    printf("Sum of array elements: %d\n", sum);

    return 0;
}