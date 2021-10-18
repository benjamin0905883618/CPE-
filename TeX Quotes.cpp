#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string input;
    stack <int> s;
    while(getline(cin,input)){
        for(int i = 0;i < input.size();i++){
            if(input[i] == '"' && s.empty()){
                cout << "``";
                s.push(1);
            }
            else if(input[i] == '"'){
                cout << "''";
                s.pop();
            }
            else
                cout << input[i];
        }
        cout << endl;
    }
}
