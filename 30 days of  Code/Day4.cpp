//Day 4
//30 days of Code (Hackerrank C++)

#include <iostream>
using namespace std;
    int main(){
        int num;
        cin>>num;
        
        if (num%2 != 0) {
            cout<<"Weird";
        }
        else if (num%2 == 0 && num<=5) {
            cout<<"Not Weird";
        }
        else if (num%2 == 0 && num<=20) {
            cout<<"Weird";
        }
        else if (num%2 == 0 && num>=21)
        {
            cout<<"Not Weird";
        }
        
        return 0;
    
        
}