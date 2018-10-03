#include<stdio.h>
#include<stdlib.h>

int main(){
	
	unsigned long long int a,b,sum;
//	unsigned long long a[2];
	
	//scanf("%lld %lld",&a,&b);
	
	while(scanf("%lld %lld",&a,&b)!=EOF){
		//a[0]=a;a[1]=b;
		if(a<b)
		sum=b-a;
		else
		sum=a-b;
		printf("%lld\n",sum);
		
	//	scanf("%lld %lld",&a,&b);

	}
	return 0;
}
