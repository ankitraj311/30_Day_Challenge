#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
  
  
  //here we are getting the percentage of tax and tip. And we are calculating tip and tax value in double to get exact result.
    double tip = meal_cost * tip_percent/100;  //My Code ******
    double tax = meal_cost * tax_percent/100;  //My Code ******
    double total_cost = (int)round(meal_cost + tip + tax);  //My Code ******
    cout <<total_cost;

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
