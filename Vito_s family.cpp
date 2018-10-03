#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int r,n,p,mid,sum=0,temp;
	scanf("%d",&r);
	
	int neighbor[r][30000]={{0},{0}};
	int distance[r]={0};
	
	for(int i=0;i<r;i++){
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%d",&p);
			neighbor[i][j]=p;
			//printf("%d ",neighbor[i][j]);
		}
		
		for(int a=0;a<n;a++){
			for(int b=a+1;b<n;b++){
				if(neighbor[i][a]>neighbor[i][b]){
					temp=neighbor[i][a];
					neighbor[i][a]=neighbor[i][b];
					neighbor[i][b]=temp;
				}
			}
		}
		
		if(n%2==0){
			mid=(neighbor[i][(n/2)-1]+neighbor[i][(n/2)])/2;
			//printf("%d",mid);
			for(int j=0;j<n;j++){
				if(mid<neighbor[i][j])
				sum=sum+(neighbor[i][j]-mid);
				else if(mid>neighbor[i][j])
				sum=sum-(neighbor[i][j]-mid);				
			}	//printf("%d\n",sum);
			distance[i]=sum; sum=0;
		}
		else{
			mid=neighbor[i][(n/2)];
			//printf("%d",mid);
			for(int j=0;j<n;j++){
				if(mid<neighbor[i][j])
				sum=sum+(neighbor[i][j]-mid);
				else if(mid>neighbor[i][j])
				sum=sum-(neighbor[i][j]-mid);				
			}	//printf("%d\n",sum);
			distance[i]=sum; sum=0;
		}
	}
	
	for(int i=0;i<r;i++){
	printf("%d\n",distance[i]);
	}
} 
