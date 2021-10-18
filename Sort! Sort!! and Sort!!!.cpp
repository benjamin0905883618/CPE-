#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;

bool compare(int a,int b){
    if(a % n != b % n)
        return (a % n) < (b % n);
    else{
        if(a % 2 != b % 2)
            return (a % 2) > (b % 2);
        else{
            if(a % 2 == 1)
                return a > b;
            else
                return a < b;
        }
    }
}

int main(){
    int c;
    while(cin >> c >> n){
        if(c == 0 && n == 0)
            break;
        cout << c << " " << n << endl;
        vector<int> v;
        for(int i = 0;i < c;i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),compare);
        for(const auto &i : v){cout << i << endl;}
    }
    cout << 0 << " " << 0 << endl;
}
