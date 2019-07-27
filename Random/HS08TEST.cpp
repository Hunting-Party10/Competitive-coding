#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    scanf("%d",&x);   
    float n;
    scanf("%f",&n);
    cout<<setprecision(2)<<fixed;
    if(x%5 != 0)
        cout<<n;
    else if(x>n)
        cout<<n;
    else
        cout<<(n-x-0.50);
}