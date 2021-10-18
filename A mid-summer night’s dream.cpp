#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector <int> v;
        for(int i = 0;i < n;i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        float a;
        int c = 0;
        int time;
        if(v.size() % 2 == 0){
            a = v[v.size() / 2-1];
            time = v[v.size()/2] - v[v.size()/2-1] + 1;
            if(time != 1)
                c += count(v.begin(),v.end(),v[v.size()/2]);
            c += count(v.begin(),v.end(),v[v.size()/2-1]);
        }
        else{
            a = v[v.size() / 2];
            c = count(v.begin(),v.end(),a);
            time = 1;
        }
        cout << a << " " << c << " " << time << endl;
    }
}
