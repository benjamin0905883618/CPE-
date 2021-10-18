#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

int bubble_sort(){
    int time = 0;
    for(int i = 0;i < v.size()-1;i++){
        for(int j = 0;j < v.size()-1;j++){
            if(v[j] > v[j+1]){
                //cout << "swap" << v[j] << " " << v[j+1] << endl;
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                time++;
            }
        }
    }
    return time;
}

int main(){
    int n;
    while(cin >> n){
        for(int i = 0;i < n;i++){
            v.clear();
            int l;
            cin >> l;
            for(int j = 0;j < l;j++){
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            cout << "Optimal train swapping takes " << bubble_sort() << " swaps." << endl;
        }
    }
}
