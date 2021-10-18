#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
    int N;
    while(cin >> N){
        for(int i = 1;i <= N;i++){
            string temp;
            int s1,s2;
            cin >> temp;
            if(temp[0] == '0'){
                cout << "Love is not all you need!" << endl;
                continue;
            }
            s1 = stoi(temp,nullptr,2);
            cin >> temp;
            if(temp[0] == '0'){
                cout << "Love is not all you need!" << endl;
                continue;
            }
            s2 = stoi(temp,nullptr,2);
            //cout << s1 << " " << s2 << endl;
            cout << "Pair #" << i << ": ";
            if(__gcd(s1,s2) > 1){cout << "All you need is love!" << endl;}
            else{cout << "Love is not all you need!" << endl;}
        }
    }
}
