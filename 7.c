#include<stdio.h>
int main()
{
int arr1[10000], N, i;
  scanf("%d",&N);
  for(i=0; i<N; i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(i = N-1; i>=0; i--)
  {
    printf("%d ",arr1[i]);
  }
    return 0;

}
