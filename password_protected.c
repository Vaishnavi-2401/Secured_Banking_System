#include <stdio.h>
#include <string.h>

// To set Username and Password
#define USERNAME "vaishnavi_chirmade"  
#define PASSWORD "Project@123"                 

// Structure to store bank details
typedef struct 
{
    char accountHolder[50];
    char accountNumber[20];
    double balance;
} BankDetails;

// Function to display bank details securely
void displayBankDetails() 
{
    BankDetails bank = {"CHIRMADE VAISHNAVI", "1234567890", 600000.50};

    printf("\nAccess Granted! Welcome to the secured banking system.\n");
    printf("---------------------------------------------------\n");
    printf("Account Holder: %s\n", bank.accountHolder);
    printf("Account Number: %s\n", bank.accountNumber);
    printf("Account Balance: $%.2f\n", bank.balance);
    printf("---------------------------------------------------\n");
}

int main() 
{
    char name[50];             
    char pass[50];            
    int attempts = 3;                 

    while (attempts > 0) 
    {
        printf("Enter Username: ");
        scanf("%s", name); 

        printf("Enter Password: ");
        scanf("%s", pass); 

        if (strcmp(name, USERNAME) == 0 && strcmp(pass, PASSWORD) == 0) 
        {
            displayBankDetails();
            return 0;
        } 
        else 
        {
            attempts--;
            printf("Incorrect Username or Password! %d attempts remaining.\n", attempts);
        }
    }

    printf("Access Denied! Too many failed attempts.\n");
    return 1; 
}