#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial=factorial*i; 
    }
    return factorial;
}

int main()
{
    int n;
    cout<<"enter your number to find factorial: "<<endl;
    cin>>n;

    int ans=fact(n);
    cout<<"factorial of "<<n<<" is : "<<ans<<endl;

    return 0;

}