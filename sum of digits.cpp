#include<stdio.h>>
int main(){
	int n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	int num=n;
	while(n>0){
		int digit=n%10;
		    sum+=digit;
		    n=n/10;
	}
	printf("sum of digits: %d\n",sum);
	return 0;
}
