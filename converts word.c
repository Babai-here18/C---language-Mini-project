#include<stdio.h>
int main()
{
	//Variables that take in using long int
	long int num,count=0,i,rem=1,sem=0,be,le=0,n,k=1,je,bem,ne=1,ke,a,b;
	//input portion from users
	printf("\n (1-2147483647)");
	printf("\n Enter a number in the above range : ");
	scanf("%ld",&num);
	if(num<=0 && num!=0)
	{
		printf("\n Number is Negative...please check this number and Enter(1-2147483647)");
		exit(0);
	}
	else if(num==0)
	{
		printf("\n Number is Null[Zero] Please Enter(1-2147483647)");
		exit(0);
	}
	
	be=num;
	//count part that count how much numbers user enter
	while(num)
	{
		num=num/10;
		count++;
	}
	//this line helps to check that whether the total numbers has been completed or not if count biger than 0 than it run the others below codes or it skip the codes 
	while(count>0)
	{
		//Single number printing part like one two ...
		if(count==1||count==3||count==4||count==6||count==8||count==10)
		{
			//it is for got the single number like user enter 145 it convert it into 1 
			for(i=1;i<count;i++)
			{
				le++;
				rem=rem*10;
			}
			sem=be/rem;
			rem=1;
			bem=sem;
			while(bem!=0)
			{
				bem=0;
				//it is main part that compare the number and print like 1 so print one
				switch(sem)
				{
					case 1:printf(" One");
					break;
					case 2:printf(" Two");
					break;
					case 3:printf(" Three");
					break;
					case 4:printf(" Four");
					break;
					case 5:printf(" Five");
					break;
					case 6:printf(" Six");
					break;
					case 7:printf(" Seven");
					break;
					case 8:printf(" Eight");
					break;
					case 9:printf(" Nine");
					break;
					default:printf(" ");
				}
			}
		}
	else
	{
		if(ne==0)
		{
			ke=be-0;	
			switch(ke)
			{
				case 1:printf(" One");
				break;
				case 2:printf(" Two");
				break;
				case 3:printf(" Three");
				break;
				case 4:printf(" Four");
				break;
				case 5:printf(" Five");
				break;
				case 6:printf(" Six");
				break;
				case 7:printf(" Seven");
				break;
				case 8:printf(" Eight");
				break;
				case 9:printf(" Nine");
				break;
				default:printf(" ");
			}
		}
		else
		{
			for(i=1;i<count-1;i++)
			{
				le++;
				rem=rem*10;
			}
			sem=be/rem;
			rem=1;
			a=sem/10;
			b=sem%10;
			switch(a)
			{
				case 1:
				switch(b)
				{
				case 0:printf("  Ten");
				break;
				case 1:printf("  Eleven");
				break;
				case 2:printf("  Twelve");
				break;
				case 3:printf("  Thirtin");
				break;
				case 4:printf("  Fourtin");
				break;
				case 5:printf("  Fiftin");
				break;
				case 6:printf("  Sixtin");
				break;
				case 7:printf("  Seventin");
				break;
				case 8:printf("  Eighttin");
				break;
				case 9:printf("  Ninetin");
				} break;
				
				case 2:printf("  Twenty");
				break;
				case 3:printf("  Thirty");
				break;
				case 4:printf("  Fourty");
				break;
				case 5:printf("  Fifty");
				break;
				case 6:printf("  Sixty");
				break;
				case 7:printf("  Seventy");
				break;
				case 8:printf("  Eighty");
				break;
				case 9:printf("  Ninety");
			}
				if(a !=1)
				{
				switch(b)
				{
				case 1:printf(" One");
				break;
				case 2:printf(" Two");
				break;
				case 3:printf(" Three");
				break;
				case 4:printf(" Four");
				break;
				case 5:printf(" Five");
				break;
				case 6:printf(" Six");
				break;
				case 7:printf(" Seven");
				break;
				case 8:printf(" Eight");
				break;
				case 9:printf(" Nine");
				break;
				default:printf(" ");
			
				}
			}
		}
	}
	bem=sem;
	while(bem!=0)
	{
		bem=0;
		switch(count)
		{
			case 3:printf(" Hundred");
			break;
			case 4:printf(" Thousand");
			break;
			case 5:printf(" Thousand");
			break;
			case 6:printf(" Lakh");
			break;
			case 7:printf(" Lakh");
			break;
			case 8:printf(" Crore");
			break;
			case 9:printf(" Crore");
			break;
			case 10:printf(" Billion");
			break;
			default:printf("");
		}	
	}
	k=sem;
	if(count==1||count==3||count==4||count==6||count==8||count==10)
	{
		for(n=1;n<count;n++)
		{
			k=k*10;
		}
	}
	else
	{
		for(n=1;n<count-1;n++)
		{
			k=k*10;
		}
	}
	be=be-k;
	count=le;
	le=0;
	k=1;
	ne=1;
	if(count==2)
	{
		ne=be/10;
	}
	}
	return 0;
}