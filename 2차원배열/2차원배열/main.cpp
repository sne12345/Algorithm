#include<stdio.h>

int main(void)
{
     int i, j;
     
     int arr[2][4] = {
         {1,2,3,4},
         {5,6,7,8} };

     int *temp[2];
     int *tempp;

     for (i = 0; i < 2; i++)
     {
      temp[i] = arr[i];//행의 주소를 temp배열에 저장
     }
    
    for (i = 0; i < 2; i++)
    {
     for (j = 0; j < 4; j++)
     {
      printf("%5d", temp[i][j]);
     }
     puts("");
    }
    puts("");
    
    
    for (i = 0; i < 2; i++)
     {
         
      for (j = 0; j < 4; j++)
      {
       printf("%5d", temp[i][j]);
      }
      puts("");
     }
     puts("");
     
    
     tempp = temp[0];
     temp[0] = temp[1];
     temp[1] = tempp;

     for (i = 0; i < 2; i++)
     {
      for (j = 0; j < 4; j++)
      {
       printf("%5d", temp[i][j]);
      }
      puts("");
     }
     puts("");
     
 return 0;
}
