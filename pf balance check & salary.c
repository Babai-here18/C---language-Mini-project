#include<stdio.h>
#include<stdlib.h>
void solve1(int,int,int,int);
void solve2(int,int,int);

int main()
{
	int income,work,am,pf1,ch,pf2;
    printf("\n\t-: PF BALANCE CHECK & SALARY :-\n");
    printf("\n How much is a daya's income?: ");
	scanf("%d",&income);
	printf("\n How much work do you do in a month? : ");
	scanf("%d",&work);
	if(work>=31)
	{
		printf("\n Are you crazy %d is not vaild in a month",work);
		exit(0);
	}
	printf("\n Have you taken any advance in one month's:\n");
	printf("\n \t\tYes..press one [1]\n");
	printf("\n \t\tNo...press Two [2]\n");
	printf("\nPlease Enter the choice: ");
	scanf("%d",&ch);
	if(ch!=1 && ch!=2)
	{
		printf("\n Choice is wrong please Enter the 1 and 2....):");
		exit(0);
	}
	else if(ch==1){
		printf("\n\t[Please enter the amount:]--> ");
		scanf("%d",&am);
		printf("\n How much does PF balance take in a day? : ");
	    scanf("%d",&pf1);
	    solve1(income,work,am,pf1);
		exit(0);
	}
	printf("\n How much does PF balance take in a day? : ");
	scanf("%d",&pf2);
	printf("\n=================================================================\n");
	solve2(income,work,pf2);
    	
return 0;	
}
void solve1(int income,int work,int am,int pf1)
{
	char ch1;
    pf1*=work;
	int pay=(income*work)-pf1;
	pay-=am;
	printf("\n=================================================================\n");
	printf("\n[Your one month salary after deducting PF and advance:-  %d ]\n",pay);
    
	printf("\n Do you want to check your PF Balance:- [y] || [n] : ");
	fflush(stdin);
    scanf("%s",&ch1);
    if(ch1=='y')
    {
        printf("\n\t[You have a PF of one month]:-->  %d\n",pf1);
    }
    else
    {
        printf("\n\tIt's ok....):");
    }
	
}
void solve2(int income,int work,int pf2)
{
	char ch1;
	pf2*=work;
	int pay=(income*work)-pf2;
	printf("\n[Your one month salary after deducting PF:-  %d ]\n",pay);
	
	printf("\n Do you want to check your PF Balance:- [y] || [n] : ");
	fflush(stdin);
    scanf("%s",&ch1);
    if(ch1=='y')
    {
        printf("\n\t[You have a PF of one month]:-->  %d\n",pf2);
    }
    else
    {
        printf("\n\tIt's ok....):");
    }
		
}

