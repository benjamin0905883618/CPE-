#include<iostream>
#include<map>
#include<string>
#include<cctype>
#include<iomanip>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        string temp;
        getline(cin,temp);
        getline(cin,temp);
        for(int i = 0;i < n;i++){
            //cout << i << endl;
            map <string,float> m;
            int total = 0;
            while(getline(cin,temp) && temp != "\0"){
                total++;
                if(m.count(temp) > 0){
                    m[temp]++;
                }
                else{
                    m[temp] = 1;
                }
            }
            //cout << "total : " << total << endl;
            for(const auto& [key,value]:m){
                cout << key << " " << fixed << setprecision(4) << value*100/total << endl;}
        }
    }
}
