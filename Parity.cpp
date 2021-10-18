#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> v;

int base2(int n){
    int sum = 0;
    while(n > 0){
        if(n % 2 == 1){
            sum++;
            v.push_back(1);
        }
        else{v.push_back(0);}
        n /= 2;
    }
    reverse(v.begin(),v.end());
    return sum;
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        v.clear();
        int temp = base2(n);
        cout << "The parity of ";
        for(const auto &i : v){cout << i;}
        cout << " is " << temp << " (mod 2)." << endl;
    }
}
