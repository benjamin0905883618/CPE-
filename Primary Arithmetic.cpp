#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    long int i1,i2;
    while(cin >> i1 >> i2){
        if(i1 == i2 && i1 == 0)
            break;
        vector<int> a;
        while(i1 >= 10){
            a.push_back(i1 % 10);
            i1 /= 10;
        }
        a.push_back(i1 % 10);
        int idx = 0;
        while(i2 >= 10){
            if(idx < a.size()){
                a[idx] += i2 % 10;
            }
            else{
                a.push_back(i2 % 10);
            }
            i2 /= 10;
            idx++;
        }
        if(idx < a.size()){
            a[idx] += i2 % 10;
        }
        else{
            a.push_back(i2 % 10);
        }

        int temp = 0;
        int sum = 0;
        for(const auto &i : a){
            if(i + temp >= 10){
                temp = 1;
                sum++;
            }
            else
                temp = 0;
        }
        if(sum == 0)
            cout << "No carry operation." << endl;
        else if(sum == 1)
            cout << "1 carry operation." << endl;
        else
            cout << sum << " carry operations." << endl;
    }
}
