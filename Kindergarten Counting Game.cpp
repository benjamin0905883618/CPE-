#include<iostream>
#include<string>
#include<sstream>
#include<cctype>

using namespace std;

int check(string s){
    int flag = 0;
    int sum = 0;
    for(int i = 0;i < s.length();i++){
        if(isalpha(s[i])){
            if(flag == 0){
                sum++;
                flag = 1;
            }
        }
        else{
            flag = 0;
        }
    }
    return sum;
}

int main(){
    string input;
    while(getline(cin,input)){
        istringstream is(input);
        string temp;
        int c = 0;
        while(is >> temp){
            c += check(temp);
        }
        cout << c << endl;
    }
}
