#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        for(int i = 1;i <= n;i++){
            int l_b,u_b;
            int sum = 0;
            cin >> l_b >> u_b;
            for(int j = l_b;j <= u_b;j++){
                if(j % 2 != 0)
                    sum += j;
            }
            cout << "Case " << i << ": " << sum << endl;
        }
    }
}
