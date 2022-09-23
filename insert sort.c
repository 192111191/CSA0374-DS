#include<stdio.h>
int main()
{
	int i,j,count,temp,num[25];
	printf("how many numbers u are going to enter?:");
	scanf("%d",&count);
	printf("enter number of elements:");
	for(i=0;i<count;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=1;i<count;i++)
	{
		temp=num[i];
		j=i-1;
		while((temp<num[j])&&(j>=0))
	    {
		    num[j+1]=num[j];
		    j=j-1;
    	}
    	num[j+1]=temp;
	}
	printf("order of sorted elements:");
	for(i=0;i<count;i++)
	{
		printf("%d",num[i]);
	}
	return 0;
}
