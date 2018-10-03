#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a,b,sum=0;
		int s[9]={0};
		//int c[];
		scanf("%d",&a);
			b=a;
			int round=1;
			
			while(a!=1&&a!=4){  //如果出現重複數字則為unhappy, 若是unhappy一定會進入4的迴圈 
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
			
			if(a==1)
			printf("Case %d:%d is a Happy number.\n",round,b);
			else
			printf("Case %d:%d is an Unhappy number.\n",round,b);
			
			round++;
		}
		
	
	return 0;
} 
