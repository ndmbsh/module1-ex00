#include<stdio.h>
///Version 3: Reverse Table
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Revers Table of %d:\n", n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}