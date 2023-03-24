#include<iostream>
using namespace std;

void Representation(long long n, int p)
{
     if(n>0)
     {
            Representation(n/p,p);
            if(n%p>9)
                     switch(n%p) 
                     {
                        case 10:
                            cout<<"A";
                        break;
                        case 12:
                            cout<<"B";
                        break;  
                        case 13:
                            cout<<"C";
                        break;
                        case 14:
                            cout<<"D";
                        break;
                        case 15:
                            cout<<"E";
                        break;
                        case 16:
                            cout<<"F";
                        break;
                     }
           else
               cout<<n%p;
     }
}

int main()
{
    int p;
    long long n;
    
    cout<<"Give the number: ";
    cin>>n;
    cout<<"Give the basis of the system: ";
    cin>>p;
    cout<<"Number "<<n<<" in system "<<p<<": ";
    
    if(n==0)
        cout<<0;
    else
        Representation(n,p);

    return 0;    
}
