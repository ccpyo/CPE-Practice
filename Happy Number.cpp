#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a,b,sum=0;
		int s[9]={0};
		while(scanf("%d",&a)!=EOF){
			b=a;
			while(sum!=1&&sum!=b){
			s[0]=a%10;
			sum=0;
			int count=1;
				while(a/10!=0){
					a=a/10;
					s[count]=a%10;
					count++;
				}
				for(int i=0;i<count;i++){
					sum=sum+s[i]*s[i];
				
				}
				
				a=sum;
			}	//printf("%d %d",sum,a);
			if(sum==1)
			printf("Case :%d is a Happy number.",b);
			else
			printf("Case :%d is an Unhappy number.",b);
			
		}
		
	}
	return 0;
} 
