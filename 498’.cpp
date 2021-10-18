#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    int x;
    while(cin >> x){
        string temp;
        vector<long long int> v;
        getline(cin,temp);
        getline(cin,temp);
        int neg = 0;
        v.insert(v.begin(),0);
        for(const auto &i : temp){
            if(int(i) - 48 > -1 && int(i) - 48 < 10){
                int t = (neg == 0)?int(i) - 48 : 48 - int(i);
                v[0] *= 10;
                v[0] += t;
            }
            else if(int(i) == 45){neg = 1;}
            else{
                v.insert(v.begin(),0);
                neg = 0;
            }
        }
        v.erase(v.begin());
        for(int i = 1;i < v.size();i++){v[i] *= i;}
        v.erase(v.begin());
        long long int sum = 0;
        for(int i = 0;i < v.size();i++){
            for(int j = 0;j < i;j++)
                v[i] *= x;
            sum += v[i];
        }
        cout << sum << endl;
    }
}
