#include<iostream>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    string a,b;
    while(cin >> a >> b){
        //cout << a << " " << b << endl;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        //cout << a << endl;

        if(a.length() > b.length()){
            for(int i = 0;i < b.length();i++){
                int position = a.find(b[i],0);
                if(position <= a.length()){
                    cout << a[position];
                    a.erase(position,1);
                }
            }
        }
        else if(a.length() <= b.length()){
            for(int i = 0;i < a.length();i++){
                int position = b.find(a[i],0);
                if(position <= b.length()){
                    cout << b[position];
                    b.erase(position,1);
                }
            }
        }
        cout << endl;
    }
}
