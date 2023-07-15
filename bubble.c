#include<stdio.h>
int main(void)
{
   int  i = 0 , cnt = 0  , temp = 0  , usrdata = 0 ;
   int data[] = {212,111111111,2,44444444,23,21,33,44444442,12,3,5,7,987654321,2,63,345678,2 };


      printf("bubble_sort\n\n");


for(int j =0 ; j <=  sizeof(data) / sizeof(int); j++)
{
for(cnt = 0 ; cnt < sizeof(data) / sizeof(int) ; cnt++ )
{
            if(data[cnt] >= data[cnt+1] )
                     {
                           // printf("%d\n",data[cnt]);
                     }
             if(data[cnt] <= data[cnt+1])
                     {
                           temp  =  data[cnt] ;
                           data[cnt] = data[cnt+1];
                           data[cnt+1] = temp;
                           // printf("%d\n",data[cnt]);
                     }

}
}


for(cnt = 0 ; cnt < sizeof(data) / sizeof(int) ; cnt++ )
{
   printf("%d\n",data[cnt]);
}



return 0 ;
}

