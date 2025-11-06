#include<stdio.h>
//Create a login system:
// Check if enteredPassword == correctPassword

int main(){
    int correctPassword = 1234;
    int enteredPassword;
    // user inputs 
    printf("Pless enter the 4-digit password: ");
    //user input 
    scanf("%d", &enteredPassword);
    // Relational opertor (==) for camparsion
    if (enteredPassword == correctPassword)
    {
       printf("Access Granted! Welcome to the system.\n"); /* code */
    }
    else{
        printf("Access Denied. Incorrrect password. \n");
    }
    return 0;
}