#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> alpha;
        alpha.assign(26,0);
        string input;
        getline(cin,input);
        for(int i = 0;i < n;i++){
            getline(cin,input);
            for(const auto &j : input){
                if(int(j) >= 65 && int(j) < 91){
                    alpha[int(j) - 65]++;
                }
                else if(int(j) >= 97 && int(j) < 123){
                    alpha[int(j) - 97]++;
                }
            }
        }
        while(*max_element(alpha.begin(),alpha.end()) > 0){
            int position = find(alpha.begin(),alpha.end(),*max_element(alpha.begin(),alpha.end())) - alpha.begin();
            cout << char(65 + position) << " " << *max_element(alpha.begin(),alpha.end()) << endl;
            alpha[position] = 0;
        }
    }

}
