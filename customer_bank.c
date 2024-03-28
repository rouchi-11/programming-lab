#include <stdio.h>
#include <string.h>


struct BankAccount {
    int accountNumber;
    char accountHolderName[100];
    double balance;
    char internetBanking[4]; // "Yes" or "No"
    int pinCode;
    char accountType[20];
};

char* identifyCustomerType(double balance) {
    if (balance > 1000000)
        return "Golden";
    else if (balance > 500000)
        return "Silver";
    else
        return "General";
}

int main() {
    int N,i;
    printf("Enter the number of customers: ");
    scanf("%d", &N);

    struct BankAccount customers[N];

    for ( i = 0; i < N; ++i) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Account Holder Name: ");
        getchar(); // Clear input buffer
        fgets(customers[i].accountHolderName, sizeof(customers[i].accountHolderName), stdin);
        customers[i].accountHolderName[strcspn(customers[i].accountHolderName, "\n")] = 0; // Remove newline character
        printf("Balance: ");
        scanf("%lf", &customers[i].balance);
        printf("Internet Banking Facility Availed (Yes/No): ");
        scanf("%s", customers[i].internetBanking);
        printf("PIN Code (422001 to 422013): ");
        scanf("%d", &customers[i].pinCode);
        printf("Account Type (saving, recurring, deposit): ");
        scanf("%s", customers[i].accountType);
    }

    
    printf("\nCustomers availing internet banking facility:\n");
    for ( i = 0; i < N; ++i) {
        if (strcmp(customers[i].internetBanking, "Yes") == 0) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].accountHolderName);
        }
    }

  
    int postalCode;
    printf("\nEnter the postal code to filter customers: ");
    scanf("%d", &postalCode);
    printf("Customers belonging to postal code %d:\n", postalCode);
    for ( i = 0; i < N; ++i) {
        if (customers[i].pinCode == postalCode) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].accountHolderName);
        }
    }

  
    printf("\nGolden Customers:\n");
    for (i = 0; i < N; ++i) {
        if (strcmp(identifyCustomerType(customers[i].balance), "Golden") == 0) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].accountHolderName);
        }
    }

    printf("\nSilver Customers:\n");
    for (i = 0; i < N; ++i) {
        if (strcmp(identifyCustomerType(customers[i].balance), "Silver") == 0) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].accountHolderName);
        }
    }

    printf("\nGeneral Customers:\n");
    for ( i = 0; i < N; ++i) {
        if (strcmp(identifyCustomerType(customers[i].balance), "General") == 0) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].accountHolderName);
        }
    }

    return 0;
}

