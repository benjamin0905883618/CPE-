#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string input;
    while(cin >> input){
        vector<int> temp;
        if(input == "0")
            break;
        for(int i = input.size()-1;i >= 0;i--){
            //cout << int(input[i]) - 48 << " " << endl;
            temp.push_back(int(input[i]) - 48);
        }
        int odd = 0;
        int even = 0;
        for(int i = 0;i < temp.size();i++){
            if(i % 2 == 0)
                odd += temp[i];
            else
                even += temp[i];
        }
        //cout << odd << endl;
        //cout << even << endl;
        if((odd - even) % 11 == 0)
            cout << input << " is a multiple of 11." << endl;
        else
            cout << input << " is not a multiple of 11." << endl;
    }

}
