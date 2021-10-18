#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        string input;
        getline(cin,input);
        for(int j = 0;j < n;j++){
            getline(cin,input);
            vector<int> v;
            v.push_back(0);
            for(int i = 0;i < input.length();i++){
                if(input[i] == ' '){
                    if(v.back() == 0)
                        continue;
                    else
                        v.push_back(0);
                }
                else{
                    v[v.size()-1] = v.back() * 10 + int(input[i]) - 48;
                }
            }
            int maxi = 0;
            for(int i = 0;i < v.size()-1;i++){
                for(int k = i+1;k < v.size();k++){
                    //cout << v[i] << " " << v[k] << endl;
                    if(v[i] < maxi || v[k] < maxi)
                        continue;
                    else{
                        if(maxi < __gcd(v[i],v[k]))
                            maxi = __gcd(v[i],v[k]);
                    }
                }
            }
            cout << maxi << endl;
        }
    }
}
