#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin>>N;
    if( N%2 != 0)
    {
        cout<<"Weird"<<endl;
    }else if( N%2 == 0 && N>=2 && N<=5)
    {
        cout<<"Not Weird"<<endl;
    }else if( N%2 == 0 && N>5 && N<21)
    {
        cout<<"Weird"<<endl;
    }else if( N%2 == 0 && N>20)
    {
        cout<<"Not Weird"<<endl;
    }

    return 0;
}


