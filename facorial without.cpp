int main()
{
	int n,i;
	unsigned long long fact=1;
	printf("enter the integer");
	scanf("%d",&n);
	if(n<0)
	printf("error!enter the negative number doesn't exist");
	else{
		for(i=1;i<=n;++i){
		fact*=1;
	}
	printf("factorial of %d=%llu",n,fact);
}
return 0;
}
