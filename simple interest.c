#include<stdio.h>
struct simple
{
	int principle;
	float rate;
	int years;
	int amount;
	int ch;
	int time;
	
	
	
};
void function1(struct simple var1);
void function2(struct simple var1);

int main()
{
	struct simple var1;
	printf("\n\t -: SIMPLE INTEREST  CHECK :- \n");
	printf("\n Enter the principle amount: ");
	scanf("%d",& var1.principle);
	printf("\n Please Enter the Rate: ");
	scanf("%f",& var1.rate);
	printf("\n Please Enter the time------>");
	printf("\n [1] MONTH \n [2] YEARS");
	printf("\n please choose any one: ");
	scanf("%d",&var1.ch);
	if(var1.ch==1)
	{
	printf("\n please Enter month: ");
	scanf("%d",&var1.time);
	if(var1.time>=13)
	{
		printf("\n Are you crazy %d is not vaild in month",var1.time);
		exit(0);
	}
	function1(var1);
}
	else if(var1.ch==2)
	{
	printf("\n please Enter year: ");
	scanf("%d",&var1.time);
	function2(var1);
}
	else{
    printf("\n Sorry Wrong choice......):");
}
	
	
	return 0;
}
void function1(struct simple var1)
{
    float si,am,tol;
    printf("\n ------------------------------------------\n");
	printf("  your real amount this: %d",var1.principle);
	printf("\n ------------------------------------------\n");
    am=var1.principle;
    si=(var1.principle*var1.rate*var1.time)/100;
    tol= si + am;
    printf(" interest is:     %.2f \n\t\t+\n Real amount is:  %.2f \n--------------------------------------\n Total amount:    %.2f",si,am,tol);
    
}
void function2(struct simple var2)
{
    float si,am,tol;
    printf("\n ------------------------------------------\n");
	printf("  your real amount this: %d",var2.principle);
	printf("\n ------------------------------------------\n");
    am=var2.principle;
    var2.years=var2.time*12;
    si=(var2.principle*var2.rate*var2.years)/100;
    tol= si + am;
    printf(" interest is:     %.2f \n\t\t+\n Real amount is:  %.2f \n--------------------------------------\n Total amount:    %.2f",si,am,tol);
    
}