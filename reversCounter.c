#include<stdio.h>
//Reverse Counter
// Print from n down to 1
// Input: 5 → Output: 5, 4, 3, 2, 1
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

  int counter = n;
  while (counter >= 1)  //condition: go down to 1
  {
    printf("Current value: %d\n", counter);  
    counter = counter - 1;   
    //  + Bug! counter--; Same as counter = counter - 1
    //counter -= 1; Same as counter = counter - 1

  }
  return 0;
  
}