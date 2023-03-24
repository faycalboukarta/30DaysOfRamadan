#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(){
   const t;
   int n,m,i,j,s;
   int t1[100],t2[100];
   
   do
   {
      printf(" give me the number of test cases where 1 <= number of test <= 100 :\n");
      scanf("%d",&t);
      if(t > 100){
         printf("the number of test case is big\n");
      }else if(t<1){
         printf("the number of test case is small\n");
      }
   } while (!(t<=100) && !( t>=1));
   
   for (i = 0; i < t; i++)
   {
      do{
         printf(" give me the number of 5-seaters and 7-seaters, respectively : \n");
         scanf(" %d%d",&n,&m);
      } while ( !(n>=0)  && !(m<=1000) && !(m>0));
      t1[i]=n;
      t2[j]=m;
      j++;
      
   };
   
   for ( i = 0; i < t; i++)
   {
      s=t1[i]*5 + t2[i]*7 ;
      printf("- **Test case %d**: King has %d cars that seat 5 each and %d cars that seat 7 each. So, %d*5 + %d*7 =%d people can travel together",i,t1[i],t2[i],t1[i],t2[i],s);
   };
   return 0 ;
}