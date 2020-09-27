#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void OddEven(char*);






int main() 
{
    int i,T;
    char str1[10000];
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
      scanf("%s",str1);
      OddEven(str1);
    }
    return 0;
}

void OddEven(char str[])
{
    for(int i=0; i < strlen(str); i++)
    {
      if(i%2 == 0) 
      {
        printf("%c",str[i]);
      }
    }
   
    printf(" ");
   
    for(int i=0; i < strlen(str); i++)
    {
      if(i%2 != 0 ) 
      {
        printf("%c",str[i]);
      }
    }
    printf("\n");
}
