#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string input;
    int number;
    cin >> number;
    int length_s = 0;
    getline(cin,input);
    int alpha[26] = {0};
    for(int i = 0;i < number;i++){
        getline(cin,input);
        int length = input.length();
        length_s += length;
        for(int j = 0;j < length;j++){
            int ascii = int(input[j]);
            //cout << ascii << " ";
            if(ascii >= 65 && ascii <= 90){
                ascii -= 65;
                alpha[ascii]++;
            }
            else if(ascii >= 97 && ascii <= 122){
                ascii -= 97;
                alpha[ascii]++;
            }
        }
        //cout << endl;
    }
    /*for(int i = 0;i < 26;i++)
        cout << alpha[i] << " ";
    cout << endl;
    */
    //cout << length_s << endl;
    for(int j = 0;j < length_s;j++){
        int position = 0;
        for(int k = 0;k < 26;k++){
            if(alpha[k] == 0)
                continue;
            else{
                if(alpha[k] > alpha[position])
                    position = k;
            }
        }
        if(alpha[position] == 0)
            break;
        else{
            cout << char(position + 65)  << " "<< alpha[position] << endl;
            alpha[position] = 0;
        }        
    }
}