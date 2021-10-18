#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string input;
    while(getline(cin,input)){
        for(int j = 0;j < input.size();j++){
            int position;
            position = find(keyboard.begin(),keyboard.end(),input[j]) - keyboard.begin();
            if(position < keyboard.size()){
                int new_position = (position - 2 < 0)?position:position - 2;
                cout << keyboard[new_position];
            }
            else
                cout << input[j];
        }
        cout << endl;
    }


}
