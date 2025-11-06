#include<stdio.h>
//User-Controlled Counter (Medium)
// Ask user for a number 'n', then print 1 to n with loop 
// int main(){
//     int n;
//     int counter = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//  while (counter <= n)
//     {
//         printf("Print the current value of: %d\n ", counter);
//         counter = counter + 1;
//     }
//     return 0;
    
// }

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("Print the current valueof: %d\n", i);

//     }
//    return 0;
// }

/// Using do-while loop (from your notes Page 20)

int main(){
    int n, counter = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);

    do
    {
        printf("Print the current value of: %d\n", counter);
        counter ++;
    } while (counter <= n);
    return 0;
    
}
