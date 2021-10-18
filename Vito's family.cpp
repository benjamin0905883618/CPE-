#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 0;i < num;i++){
        int _case_;
        cin >> _case_;
        vector <int> v;
        for(int j = 0;j < _case_;j++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        //cout << v.size() << endl;
        int median;
        if(v.size() % 2 == 0){
            median = (v[v.size()/2] + v[v.size()/2 - 1])/2;
        }
        else
            median = v[v.size()/2];
        int sum = 0;
        for(const auto &i : v){
            sum += abs(i - median);
        }
        cout << sum << endl;
    }
}
