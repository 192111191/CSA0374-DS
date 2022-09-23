#include<stdio.h>
int main(){
int i,n;
	int t1=0,t2=1,nextterm;
	printf("enter the number of next term");
		scanf("%d",&n);
		printf("fibinocci series:%d %d",0,1);
		for(i=3;i<=n;i++){
		printf("%d",nextterm);	
			t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
	}
	return 0;
		
}
