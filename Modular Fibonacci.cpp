#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> Fib;

int fib(int n){
    if(n <= Fib.size()){
        return Fib[n];
    }
    else{
        //cout << Fib.size() << endl;
        while(Fib.size() <= n){
            //cout << Fib.size() << endl;
            Fib.push_back(Fib[Fib.size()-1] + Fib[Fib.size()-2]);
        }
        return Fib[n];
    }
}

int main(){
    int n,m;
    Fib.push_back(0);
    Fib.push_back(1);
    while(cin >> n >> m){
        int a1 = pow(2,m);
        int a2 = fib(n);
        //cout << a2 << " " << a1 << endl;
        int temp = a2 % a1;
        cout << temp << endl;

    }
}
