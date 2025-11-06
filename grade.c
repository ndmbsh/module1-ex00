#include<stdio.h>
//Grade calculator with multiple conditions
// Check if marks >= 90 -> A+, 70-89 -> A, etc.
int main(){
    int marks = 85;
    printf("Enter your Marks.\n");
    scanf("%d", &marks);
    if (marks < 30)
    {
      printf("Grade: C\n");  /* code */
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Grade : B\n");  /* code */
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade : A\n"); /* code */
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Grade : A+\n"); /* code */
    }
    else{
        printf("Invalid marks! Please enter between 0-100.\n");
    }
    
   return 0; 
    
    
    
}