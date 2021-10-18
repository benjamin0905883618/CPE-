#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    string input;
    int case_num = 1;
    while(cin >> input){
        cout << case_num << ". ";
        case_num++;
        vector<int> a;
        int idx = 0;
        for(int i = input.size() - 1;i >= 0;i--){
            idx++;
            //cout << idx << endl;
            if(idx == 2){a[a.size()-1] += 10 * (int(input[i]) - 48);}
            else if(idx == 5){a[a.size()-1] += 10 * (int(input[i]) - 48);}
            else if(idx == 7){
                a[a.size()-1] += 10 * (int(input[i]) - 48);
                idx = 0;
            }
            else{a.push_back(int(input[i]) - 48);}
        }
        //for(const auto &i : a){cout << i << " ";}
        //cout << endl;
        int flag = 0;
        for(int i = a.size()-1;i >= 0;i--){
            if(i == 0){
                if(a[i] != 0 || flag == 0)
                    cout << a[i] << endl;
            }
            else if(i % 4 == 0 && i >= 4){
                flag = 1;
                if(a[i] == 0)
                    cout << "kuti ";
                else
                    cout << a[i] << " kuti ";}
            else if(i % 4 == 3 && a[i] != 0){
                flag = 1;
                cout << a[i] << " lakh ";
            }
            else if(i % 4 == 2 && a[i] != 0){
                flag = 1;
                cout << a[i] << " hajar ";
            }
            else if(i % 4 == 1 && a[i] != 0){
                flag = 1;
                cout << a[i] << " shata ";
            }
        }
        cout << endl;
    }
}
