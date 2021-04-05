#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char input[100][100] = {" "};
    string temp;
    int i = 0;
    int maxlen = 0;
    while(gets(input[i])){
        if(strlen(input[i]) > maxlen)
            maxlen = strlen(input[i]);
        i++;
    }
    cout << i << endl;
    for(int k = 0;k < maxlen;k++){
        for(int j = i;j >= 0;j--){
            cout << input[j][k];
        }
        cout << endl;
    }
}
