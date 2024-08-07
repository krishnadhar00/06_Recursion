// A function calling itself again and again this is called recursion.
/* work of recursion 
1. to replace the for loop. 
2. to solve the complex problems. 
3. repition occurs
4. works as a infinite loop. */
#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hey"<<endl;
    greet();
}
int main()
{
    greet();
}
