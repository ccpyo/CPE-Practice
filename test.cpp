#include<stdio.h>
#include<stdlib.h>

int main(){

/* unsigned long long i=9999999999999;
//int i=999999999;

printf("%lld",i);*/
int a,ans=0,count=0;
scanf("%d",&a);
while(a!=1){
			
			if(a%2==0)
			{a=a/2; count=count+1;}
			else
			{a=a*3+1; count=count+1;}
			printf("%d",count);
		}
		if(count>ans)
		ans=count;
		count=0;
	
	printf("%d",ans);

} 
