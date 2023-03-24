#include<iostream>
using namespace std;

void fibonacci(int size)
{    
     long long a = 0, b = 1;
  
     for(int i=0;i<size;i++)
     {
            cout<<b<<" ";
            b =b + a; 
            a =b - a; 
     }     
}

int main()
{
    int size;
    
    cout<<"Give the number of elements of the Fibonacci sequence: ";
    cin>>size;
    
    fibonacci(size);
    
    return 0;
}
