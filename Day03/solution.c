#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
   int t, x,y,s,i,j;
   int t1[100],t2[100];
   do{
      printf(" give me the number of test cases : \n");
      scanf("%d",&t);
   } while (!(t<=100) && !( t>1));
   j=0;
   for(i=0;i<t;i++){
   do{
      printf(" give me x && y \n");
      scanf("%d %d",&x,&y);
   } while ( !(x>y) );
   t1[j]=x;
   t2[j]=y;
   j++;
   }
   for(i=0; i<t;i++){
      s=t1[i]-t2[i];
      if(i==0){
         printf("Test case %d: The amount above which you will have to pay taxes is %d. Since you earn %d Dinars, you need to invest at least %d Dinars. After investing %d dinars, you will remain with an effective income %d - %d = %d Dinars which will not be taxed.",i+1,y,x,s,s,x,y,s);
      }else{
         printf("Test case %d: The amount above which you will have to pay taxes is %d. Since you earn %d Dinars, you need to invest at least %d Dinars",i+1,y,x,s);
      }
   }
   return 0; 
}