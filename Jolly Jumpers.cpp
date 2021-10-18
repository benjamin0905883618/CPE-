#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int num;
    while(cin >> num){
        vector<int> v;
        vector<int> s;
        for(int i = 0;i < num;i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
            s.push_back(i);
        }
        sort(s.begin(),s.end());
        int flag = 0;
        for(int i = 1;i < v.size();i++){
            int position = find(s.begin(),s.end(),abs(v[i] - v[i-1])) - s.begin();
            //cout << position << endl;
            if(position == s.size()){
                flag = 1;
                cout << "Not jolly" << endl;
                break;
            }
            else{
                s.erase(s.begin() + position);
                //for(const auto &j : s){cout << j << " ";}
                //cout << endl;
            }
        }
        if(flag == 0)
            cout << "Jolly" << endl;

    }
}
