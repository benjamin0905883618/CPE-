#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        vector<int> v;
        for(int i = 1;i <= n;i++){v.push_back(i);}
        for(int i = 1;i < 100;i++){
            int j = 0;
            vector<int> l = v;
            while(l.size() != 1){
                while(j > l.size()-1)
                    j -= l.size();
                //cout << l[j] << " ";
                l.erase(l.begin() + j);
                j += (i-1);
            }
            //cout << endl;
            if(l.front() == 13){
                cout << i << endl;
                break;
            }
        }
    }
}
