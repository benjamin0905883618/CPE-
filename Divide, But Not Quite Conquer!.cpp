#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

bool check(int n,int base){
    while(n > 0){
        //cout << n << endl;
        if(n % base == 0){
            v.push_back(n);
            n /= base;
        }
        else if(n == 1){
            v.push_back(n);
            break;
        }
        else
            return false;
    }
    return true;
}

int main(){
    int n,base;
    while(cin >> n >> base){
        v.clear();
        if(base != 0 && n >= base && check(n,base)){
            for(const auto &i : v){cout << i << " ";}
        }
        else
            cout << "Boring!";
        cout << endl;
    }
}
