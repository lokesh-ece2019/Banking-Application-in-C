#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void showMenu();
void deposit();
void withdrawn();
void getPreviousTransaction();

int balance;
int previousTransaction;

char customerName[20];
char customerId[20];



void main()
{
	system("color 3");
	printf("==============================\n");
	printf("-------Bank Of India----------\n");
	printf("==============================\n");
	
	showMenu();
}

void showMenu()
{
	int option;
	printf("\n");
	printf("Customer Name: ");
	scanf("%s",customerName);
	printf("Customer Id: ");
	scanf("%s",customerId);
	system("cls");
	printf("Welcome %s\n",customerName);
	printf("Your Id is %s\n",customerId);
	
	printf("==============================\n");

	printf("1. Check balance\n");
    printf("2. Deposite\n");
    printf("3. Withdraw\n");
    printf("4. Previous transaction\n");
    printf("5. Exit\n");
    
    do
    {
    	printf("==============================\n");
		printf("Enter your option: ");
		scanf("%d",&option);
		printf("==============================\n");	
		
		switch(option)
		{
			case 1:
				{
					printf("==============================\n");
					printf("Balance is %d\n",balance);
					printf("==============================\n");
					break;
				}
			case 2:
				{
					printf("==============================\n");
					printf("Enter the amount to deposit: ");
					int amount;
					scanf("%d",&amount);
					printf("================================\n");
					deposit(amount);
					break;
				}
			case 3:
				{
					printf("================================\n");
					printf("Enter the amount to withdraw: ");
					int amount2;
					scanf("%d",&amount2);
					printf("================================\n");
					withdrawn(amount2);
					break;
				}
			case 4:
				{
					printf("================================\n");
					getPreviousTransaction();
					printf("================================\n");
					break;
				}	
			case 5:
				{
					printf("================================\n");
					printf("Thanking you!!\n");
					printf("================================\n");
				}
		}
	}while(option != 5);
	
}

void deposit(int amount)
{
	 if(amount!=0)
        {
            balance = balance + amount;
            previousTransaction = amount;
        }
}

void withdrawn(int amount)
    {
        if(amount!=0)
        {
            balance = balance - amount;
            previousTransaction = -amount;
        }
    }
    
 void getPreviousTransaction()
    {
        if(previousTransaction>0)
        {
            printf("Deposited: %d\n",previousTransaction);
        }
        else if(previousTransaction<0)
        {
            printf("Withdrawn: %d\n",abs(previousTransaction));
        }
        else
        {
            printf("No Transcation is occured!\n");
        }
    }
