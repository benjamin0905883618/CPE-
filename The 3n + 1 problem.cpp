#include<iostream>

using namespace std;

int cycle_length(int n){
    int sum = 0;
    while(n != 1){
        sum++;
        if(n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    sum++;
    return sum;

}

int main(){
    int b,e;
    while(cin >> b >> e){
        int maximum = 0;
        if(b == e){
            cout << b << " " << e << " " << cycle_length(b) << endl;
            continue;
        }
        int s = (b < e)?b:e;
        int t = (b > e)?b:e;
        for(int i = s;i < t;i++){
            if(cycle_length(i) > maximum)
                maximum = cycle_length(i);
        }
        cout << b << " " << e << " " << maximum << endl;
    }

}
