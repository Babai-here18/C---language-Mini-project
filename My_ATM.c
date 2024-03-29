#include<stdio.h>
int main()
{
	
	int pin,pin1=333,c=1,ch,amt,balance=5000;
	
	
	printf("\n\t[welcome to --Babaisoftware-- Bank]\n");
	repeat:
	printf("\n Enter the pin number: ");
	scanf("%d",&pin);
	if(pin==pin1)
	{
		printf("\n Please select your choice: \n");
		printf("\n[1.Deposite:]\n\n[2.Withdraw:]\n\n[3.check Balance:]\n\n[4.Change Pin:]\n");
		printf("\nPlease Enter the Choice  Number: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nPlease enter the deposite amount: ");
				scanf("\n%d",&amt);
				if(amt<=20000)
				{
					balance+=amt;
					printf("\n Your deposit of amount.%d is successful...):",amt);
				}
				else
				{
					printf("\n Max limit of Deposite is 20k \n");
				}
				break;
			case 2:
				printf("\nPlease enter the  Withdraw amount: ");
				scanf("\n%d",&amt);
				if(amt<=20000)
				{
					if(amt<=balance)
					{
						balance-=amt;
						printf("\n Withdraw is successful...!\n");
						printf("\n After deducting %d , current balance => %d\n",amt,balance);	
					}
					
					else
					{
						printf("\n [Insufficient balance] ");
						
					}		
				}
				else
				{
					printf("\n Max limit of Withdraw is 20k \n");
				}
				
				break;
			case 3:
				printf("\nYour balance= %d",balance);
			break;
			case 4:
				printf("\n Please enter the New Pin: ");
				scanf("%d",&pin1);
				printf("\nYour pin is updated succesfully ...!\n\nlogin again...\n");
				printf("\n======================================================================\n");
				goto repeat;
			break;
			default:
				printf("\n invaild choice...?");
				exit(0);
		}
	}
	
	else 
	{
		printf("\n Please Enter the Vaild Pin... \n");
		if(c<3)
		{
			c++;
			goto repeat;
			exit(0);
		}
		printf("\n[ATM is locked because you entered wrong pin number three times,Please run the program again]");
		exit(0);	
	}
	printf("\n\nPress [0] to continue..\n\n");
	scanf("%d",&ch);
	printf("\n======================================================================\n");
	if(ch==0)
	goto repeat;
	printf("\n [Thanks for using babaisoftware Application]\n");	
	return 0;
}