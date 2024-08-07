// One way to use using extra parameter. 
#include<iostream>
using namespace std;
void print(int x, int n) // give extra parameter.
{
    if(x>n)
    {
        return;
    }
    cout<<x<<endl;
    print(x+1,n);
}
int main()
{
    int n;
    cin>>n;
    print(1,n);
}