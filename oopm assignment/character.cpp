#include<iostream>
using namespace std;

int main()
{
    char n;
    cout<<"enter your character:"<<endl;
    cin>>n;

    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' )
    {
        cout<<"it is a vowel"<<endl;
    }
    else
    {
        cout<<"not a vowel"<<endl;

    }
}