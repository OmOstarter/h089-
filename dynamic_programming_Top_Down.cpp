/*
f(n) =
 { 1                , if n = 1
 { 2                , if n = 2
 { f(n-1) + f(n-2)  , if n >= 3 and n <= 5
 以Top-Bottom法解
 參考 http://web.ntnu.edu.tw/~algo/DynamicProgramming.html
 所學
*/
#include <iostream>
using namespace std;
const int N = 5;    //只做f(1)~f(5)
int table[N + 1];   //table[0]不使用
int f(int n);
void stair_claiming();
int main(){
    stair_claiming();
}

int f(int n)
{
    if(n == 0 || n == 1) return 1;
    if(table[n] != 0) return table[n];
    else return table[n] = f(n-1) + f(n-2);
    
}
void stair_claiming()
{
    for(int i = 0; i <= N; i++)
        table[i] = 0;
    for(int i = 1; i <= N; i++)
        cout << "爬到" << i <<"階有" << f(i) << "種方法\n" ;
    
}