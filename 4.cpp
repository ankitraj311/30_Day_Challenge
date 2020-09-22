#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
   if(N%2 == 0) //Mycode ******
    {
      if(N>=2 && N<=5)
      { //Mycode ******
      cout<<"Not Weird";
      }
      else if(N>=6 && N<=20) //Mycode ******
      {
       cout<<"Weird";
      }
      else //Mycode ******
     { 
       cout<<"Not Weird";
     }
    }
    else 
    {
      cout<<"Weird";
    }
    return 0;
}
