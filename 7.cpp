#include <bits/stdc++.h>
#include<iostream>
using namespace std;



int main()
{
    int N, arr1[10000], i;
    cin>>N;
    for(i=0; i<N; i++)
    {
      cin>>arr1[i];
    }
    for(i = N-1; i>=0; i--)
    {
      cout<< arr1[i]<<" ";
    }
    
    return 0;
}
