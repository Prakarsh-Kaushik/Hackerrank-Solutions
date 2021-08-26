//Problem 7 C++(Hackerrank)
//Input consists of the following space-separated values: int, long, char, float, and double, respectively.
//Print each element on a new line in the same order it was received as input. Note that the floating point value 
//should be correct up to 3 decimal places and the double to 9 decimal places.


#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int INT;
    long LONG;
    char CHAR; 
    float FLOAT;
    double DOUBLE;
    
    cin>>INT>>LONG>>CHAR>>FLOAT>>DOUBLE;
    cout<<INT<<endl;
    cout<<LONG<<endl;
    cout<<CHAR<<endl;
    cout<<fixed<<setprecision(3)<<FLOAT<<endl;
    cout<<fixed<<setprecision(9)<<DOUBLE<<endl;
    
    return 0;
}