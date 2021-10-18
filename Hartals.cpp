#include<iostream>
#include<vector>

using namespace std;

int main(){
    int T;
    while(cin >> T){
        for(int i = 0;i < T;i++){
            int N;
            cin >> N;
            vector<int> date;
            date.assign(N+1,0);
            int P;
            cin >> P;
            for(int j = 0;j < P;j++){
                int temp;
                cin >> temp;
                for(int k = 0;k <= N;k += temp){
                    if(k % 7 == 0 || k % 7 == 6){continue;}
                    else{date[k] = 1;}
                }
            }
            int sum = 0;
            for(const auto &j : date){if(j == 1)sum++;}
            cout << sum << endl;
        }
    }
}
