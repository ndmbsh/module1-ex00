#include<stdio.h>
// Sum calculator 
// Calculate sum of numbers from 1 to n
// Input: 5 → Output: Sum = 15 (1+2+3+4+5)
int main(){
    int sum = 0;
    int n;
    int i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    // int counter = n;
   while (i <= n)
   {
     sum = sum + i;
     i = i + 1;
   }
   
    printf("The sum of number 1 to %d is : %d\n", n, sum);
    return 0;
    

}