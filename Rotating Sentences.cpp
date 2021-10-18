#include<iostream>
#include<string>

using namespace std;

int main(){
    string arr[100];
    int length = 0;
    int max_length = 0;
    while(getline(cin,arr[length])){
        if(arr[length].length() > max_length)
            max_length = arr[length].length();
        length++;

    }
    for(int i = 0;i < max_length;i++){
        for(int j = length-1;j >= 0;j--){
            if(arr[j].length() > i){
                cout << arr[j][i];
            }
            else
                cout << " ";
        }
        cout << endl;
    }

}
