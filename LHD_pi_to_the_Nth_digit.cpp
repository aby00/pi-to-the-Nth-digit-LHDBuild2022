#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    const float pi=3.141593;
    int N;
    cout<<"Enter the digit to which you want to find pi: ";
    cin>>N;
    double result = pow(pi,N);        
    cout<<"pi to the "<<N<<"th digit: "<<result;
    return 0;
}