//Day 3 
//30 Days of Code (Hackerrank C++)

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
    int main(){
        double meal_cost;
        int tip_percent, tax_percent;
        
        cin>>meal_cost;
        cin>>tip_percent;
        cin>>tax_percent;
        
        
        double tip = (meal_cost * tip_percent)/100; //Total Tip
        double mealCostWithTip = meal_cost + tip; //Total Cost after adding tip
        
        double tax = (meal_cost * tax_percent)/100; //Tax on Meal with tip
        
        double totalCost = mealCostWithTip + tax;
        cout<<round(totalCost) ;     
        
        return 0;
    }