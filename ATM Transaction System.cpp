#include<stdio.h>
int main()
{
	float balance,withdrawl,deposit,current_balance,total;
	int ch;
	printf("Enter your current balance:\n");
	scanf("%f",&balance);
	printf("Choice your choice[1-3]:\n1.balance inquiry\n2.cash withdrawl\n3.cash deposit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("The current balance is %f\n",balance);
			break;
		case 2:
			printf("Enter withdrawl amount:\n");
			scanf("%f",&withdrawl);
			if(withdrawl<=balance)
				{
					current_balance=balance-withdrawl;
					printf("Current balance is %f\n",current_balance);
					printf("Transaction successful\n");
				}
			else
				printf("Insufficient amount\n");
				break;
		case 3:
			printf("Enter deposit amount:\n");
			scanf("%f",&deposit);
			total=balance+deposit;
			printf("The updated balance is %f\n",total);
			printf("Deposit successful\n");
			break;
		default:
			printf("Invalid option");	
	}
}
