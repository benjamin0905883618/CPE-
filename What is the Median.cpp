#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int> v;
    while(cin >> n){
        if(v.empty())
            v.push_back(n);
        else{
            v.insert(lower_bound(v.begin(),v.end(),n),n);
        }
        if(v.size() % 2 == 0){
            cout << (v[v.size()/2] + v[v.size()/2 - 1]) / 2 << endl;
        }
        else if(v.size() % 2 == 1)
            cout << v[v.size()/2] << endl;
    }

}
