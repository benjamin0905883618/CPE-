#include<iostream>
#include<vector>

using namespace std;

vector <int> FIB;

void Fib(int n){
    //for(const auto &i : FIB){cout << i << " ";}
    //cout << endl;
    if(n == 1)
        return;
    else if(n == 2)
        return;
    else{
        while(FIB.back() < n){
            FIB.push_back(FIB[FIB.size() - 1] + FIB[FIB.size() - 2]);
        }
        if(FIB.back() > n)
            FIB.erase(FIB.end()-1);
        //for(const auto &k : FIB){cout << k << " ";}
        //cout << endl;
    }
}

int main(){
    int N;
    while(cin >> N){
        int temp;
        for(int i = 0;i < N;i++){
            FIB.clear();
            FIB.push_back(1);
            FIB.push_back(2);
            cin >> temp;
            Fib(temp);
            cout << temp << " = ";
            if(temp == 1){
                cout << "1";
            }
            else if(temp == 2){
                cout << "10";
            }
            else{
                //for(const auto &k : FIB){cout << k << " ";}
                //cout << endl;
                for(int j = FIB.size() - 1;j >= 0;j--){
                    //cout << FIB[j] << endl;
                    if(temp >= FIB[j] && FIB[j] != 1){
                        temp -= FIB[j];
                        cout << "10";
                        j--;
                    }
                    else if(temp >= FIB[j] && FIB[j] == 1){
                        cout << "1";
                    }
                    else{
                        cout << "0";
                    }
                }
            }
            cout << " (fib)" << endl;
        }
    }
}
