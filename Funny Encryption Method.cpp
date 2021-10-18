#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> decimal;
vector <int> hexadecimal;

void change10(int n){
    while(n > 0){
        decimal.push_back(n % 2);
        n /= 2;
    }
    reverse(decimal.begin(),decimal.end());
}
void change16(int n){
    while(n > 0){
        int temp = n % 10;
        for(int i = 0;i < 4;i++){
            hexadecimal.push_back(temp % 2);
            temp /= 2;
        }
        n /= 10;
    }
    reverse(hexadecimal.begin(),hexadecimal.end());
    while(hexadecimal.front() == 0)
        hexadecimal.erase(hexadecimal.begin());

}

int main(){
    int n;
    while(cin >> n){
        for(int i = 0;i < n;i++){
            decimal.clear();
            hexadecimal.clear();
            int temp;
            cin >>temp;
            change10(temp);
            change16(temp);
            int b1 = 0,b2 = 0;
            for(const auto &i : decimal){if(i == 1)b1++;}
            for(const auto &i : hexadecimal){if(i == 1)b2++;}
            cout << b1 << " " << b2 << endl;

        }
    }

}
