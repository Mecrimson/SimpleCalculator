#include <stdio.h>
void add();
void subtract ();
void multiply();
void divide ();
//Main function
int main (){
    int choice;
    //The menu loop
    while (1) {
        printf("Simple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        //switch statement for users choice

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            printf("Exiting program...\n");
            return 0;
        default:
            printf("Invalid choice ! please try again.\n");
        }
    }
    return 0;
}
//Arithmetic function
void add(){
float num1,num2;
printf("Enter two numbers: \n");
scanf("%f %f", &num1, &num2);
printf("Results: %.2f\n",num1 + num2);
}
void subtract(){
float num1,num2;
printf("Enter two numbers: \n");
scanf("%f %f", &num1, &num2);
printf("Results: %.2f\n",num1 - num2);
}
void multiply(){
float num1,num2;
printf("Enter two numbers: \n");
scanf("%f %f", &num1, &num2);
printf("Results: %.2f\n",num1 * num2);
}
void divide(){
float num1,num2;
printf("Enter two numbers: \n");
scanf("%f %f", &num1, &num2);
if (num2 !=0)
{
    printf("Results: %.2f\n",num1/num2);
}
else
{
    printf("Error..Division b zero is not allowed!");

}
    
}
//This program is a simple calculator that performs addition, subtraction, multiplication, and division. It uses a switch statement to handle user input and calls the appropriate function based on the user's choice. The program continues to run until the user chooses to exit.