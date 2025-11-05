#include<stdio.h>
int main(){
    int age, hasID, isCitizen ;
    printf("How old are you :");
    scanf("%d", &age);
    printf("Do you have ID?(1 for yes, 0 for No):");
    scanf("%d", &hasID);
    printf("Are you a Citizen?(1 for Yes, 0 for No):");
    scanf("%d", &isCitizen);
    // Check if age >= 18 AND hasID == 1
    if ((age >= 18)&&(hasID == 1) && (isCitizen == 1))
    {
        printf("Congrat ypu'r eligible to vote.\n");
    }
    else{
        printf("Sorry you'r not eligible to vote.\n");
        // more spfi feedback 
        if (age<18)
        {
            printf("You need to be atlest 18 years old.\n");
        }
        if (hasID != 1)
        {
            printf("Reason: you need a valid ID.\n");/* code */
        }
        if (isCitizen != 1)
        {
          printf("Must be a citizen\n");  /* code */
        }
        
        
        
    }
   return 0;
}