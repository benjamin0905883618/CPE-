#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string input;
    while(getline(cin,input)){
        sort(input.begin(),input.end());
        //cout << input.back() << endl;
        vector <int> v;
        v.assign(int(input.back()) + 1,0);
        for(int i = 0;i < input.length();i++){
            v[int(input[i])]++;
        }
        vector<int> sorted = v;
        sort(sorted.begin(),sorted.end());
        for(int i = 0;i < v.size();i++){
            int position = find_end(v.begin(),v.end(),sorted.begin(),sorted.begin()+1) - v.begin();
            if(sorted.front() != 0){
                cout << position << " " << sorted.front() << endl;
            }
            sorted.erase(sorted.begin());
            v[position] = 0;
        }

    }
}
