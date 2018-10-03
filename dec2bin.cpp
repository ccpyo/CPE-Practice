#include<stdio.h>
#include<mpi.h> 

int main (void){
MPI_Init(NULL,NULL);
double t1,t2;
int x=0, z=0;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,count=0,ans,fin;
MPI_COMM_rank(MPI_COMM_WORLD,&fin);
ti=MPI_Wtime();

  for(z=fin; z<=65536;z=z+3)
  {
        x=z;
        p=z%2;
        z=z/2;
        o=z%2;
        z=z/2;
        n=z%2;
        z=z/2;
        m=z%2;
        z=z/2;
        l=z%2;
        z=z/2;
        k=z%2;
        z=z/2;
        j=z%2;
        z=z/2;
        i=z%2;
        z=z/2;
        h=z%2;
        z=z/2;
        g=z%2;
        z=z/2;
        f=z%2;
        z=z/2;
        e=z%2;
        z=z/2;
        d=z%2;
        z=z/2;
        c=z%2;
        z=z/2;
        b=z%2;
        z=z/2;
        a=z%2;
        z=x;
        ans=(a||b)&&(!b||!d)&&(c||d)&&(!d||!e)&&(e||!f)&&(f||g)&&(f||!g)&&(h||!i)&&(i||j)&&(i||!j)&&(!j||!k)&&(k||l)&&(j||l)&&(m||n)&&(!h||!n)&&(n||!o)&&(o||p)&&(!p||g);
        if(ans==1)
        {
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d      \n",x,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
        count++;
        }
  }
t2=MPI_Wtime();
if(fin==2){
  printf("time:%f\n",t2-t1);
  printf("%d\n",count);
}
  MPI_Finalize();
  return 0;
}

