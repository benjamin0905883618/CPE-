#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        for(int i = 0;i < n;i++){
            int a,b;
            cin >> a >> b;
            if(a < b || a % 2 != b % 2){
                cout << "impossible" << endl;
                continue;
            }
            int x = (a - b) / 2;
            int y = a - x;
            if(x > y){cout << x << " " << y << endl;}
            else{cout << y << " " << x << endl;}
        }
    }
}
