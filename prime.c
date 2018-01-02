#include<stdio.h>
#include<stdlib.h>


int get_prime(int nth)

{
      int num=2;
      int count=0;
      while(1)
        {
            int div;
            for(div=2;div<num;div++)
            {
              if(num%div==0)
              break;
             }
            if(div==num)
            count++;
            if(nth==count)
            break;
            num++;
        }
      return num;
}

int main(int argc,char *argv[])
{
      
       int nth_prime=atoi(argv[1]);
       int val;
       val=get_prime(nth_prime);
       printf("the %d prime=%d \n",nth_prime,val);
       return 0;
}
       



  
