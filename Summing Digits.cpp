#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        int sum = 0;
        while(true){
            while(n > 0){
                sum += n % 10;
                n /= 10;
            }
            //cout << sum << endl;
            if(sum >= 10){
                n = sum;
                sum = 0;
            }
            else
                break;
        }
        cout << sum << endl;
    }
}
