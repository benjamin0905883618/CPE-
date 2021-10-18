#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int num;
    string input;
    string rest;
    vector<string> Country;
    while(cin >> num){
        for(int i = 0;i < num;i++){
            cin >> input;
            getline(cin,rest);
            Country.push_back(input);
        }
        sort(Country.begin(),Country.end());
        while(!Country.empty()){
            cout << Country.front() << " " << count(Country.begin(),Country.end(),Country.front()) << endl;
            vector<string>::iterator it = Country.begin();
            Country.erase(it,it + count(Country.begin(),Country.end(),Country.front()));
        }
    }


}
