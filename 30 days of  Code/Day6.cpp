//Day 6
//30 days of Code (Hackerrank C++)

#include<iostream>
using namespace std;
    int main()
        {
            int n, product;
            cin>>n;
            
            for(int i = 1; i<=10; i++){
               product = i*n;
               cout<<n<<" x "<<i<<" = "<<product<<endl; 
            }
            return 0;
        }
        