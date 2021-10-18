#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long s,d;
    while(cin >> s >> d){
        while(true){
            d -= s;
            if(d > 0)
                s++;
            else
                break;
        }
        cout << s << endl;
    }
}
