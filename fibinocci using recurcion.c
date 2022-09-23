#include<stdio.h>
void printfibinocci(int n)
{
	static int t1=0,t2=1,nextterm;
	if(n>0){
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
	printf("%d",nextterm);
	printfibinocci(n-1);
}
}
int main(){
	int n;
	printf("enter the number of term");
	scanf("%d",&n);
	printf("fibinocci series:%d %d",0,1);
	printfibinocci(n-2);
	return 0;
}
