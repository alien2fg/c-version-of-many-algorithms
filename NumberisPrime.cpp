#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
	int n;
	
	cout<<"Give the number: ";
	cin>>n;
	
	if(isPrime(n)) 
		cout<<"Number "<<n<<" is prime."<<endl;
	else
		cout<<"Number "<<n<<" is not prime."<<endl;
	
	return 0;
}
