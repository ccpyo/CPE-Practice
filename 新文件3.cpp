#include <stdio.h>
#include <stdlib.h>
main(){
  unsigned long a,b;
  //scanf("%d%d",&a,&b);
  while(scanf("%d%d",&a,&b)!=EOF){
        printf("%d\n",a>b?a-b:b-a);
  }

  //system("pause");
  return 0;    
}
