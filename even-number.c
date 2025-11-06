#include<stdio.h>
// Print only even numbers from 1 to n  
// Input: 10 → Output: 2, 4, 6, 8, 10

int main(){
    int n ;
    printf("Enter number: ");
    scanf("%d", &n);
    int counter = n;
    while (counter >= 2)
    {
        if ((counter % 2) == 0)
        {
            printf("%d\n", counter);
        }
        
            counter = counter -1;

    }

    return 0;
    
}