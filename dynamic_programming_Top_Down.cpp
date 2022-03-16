#include <iostream>
using namespace std;
const int N = 5;    //只做f(1)~f(5)
int table[N + 1];   //table[0]不使用
bool solve[N + 1];
int f(int n); //
int main(){
    for (int i = 0; i <= N;i ++)
        solve[i] = false;
    for (int i = 1; i <= N;i ++)
    {
        cout << "f(" << i << ")=" << f(i) << endl;
    }


}
int f(int n)
{
    if (solve[n]) 
        return table[n];
    else if (n == 1) 
    {
        table[1] = 1;
        solve[1] = true;
        return 1;
    }
    else if (n == 2) 
    {
        table[2] = 2;
        solve[2] = true;
        return 2;
    }
    else
    {
        table[n] = f(n-1) + f(n-2);
        solve[n] = true;
        return table[n];
    }
        
    
}