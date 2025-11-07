#include<stdio.h>
// 2. Print n to 1 (reverse) ✓

int main(){
  int n;
  printf("Enter a number :");
  scanf("%d", &n);
  int i =n;
  while (i >= 1)
  {
    printf("%d\n", i);
   i = i -1; 
}


//  for (int  i = 0; i <=n; i++)
//  {
//     printf("%d\n", i);
//  }
 
  return 0;
  
}