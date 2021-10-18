#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0;i < 10;i++)
        v.push_back(i);
    for(int i = 0;i < v.size();i++)
        cout << v.at(i) << " ";
    cout << endl;
    cout << "front : " << v.front() << endl;
    cout << "back : " << v.back() << endl;
    v.clear();
    cout << "Is empty " << v.empty() << endl;
    cout << "Capacity " << v.capacity() << endl;

    cout << "By pointer" << endl;
    vector<int>::iterator it;
    it = v.begin();
    for(int i = 0;i < 10;i++)
        v.insert(it + i,i);
    //v.erase(it) 刪除在it這個位址的值
    //find(v.begin(),v.end(),number) 在begin~end間找number這個值，如果沒有找到會停在v.end的下一個位址
    for(it = v.begin();it != v.end();it++)
        cout << *it << " ";
    cout << endl;

    cout << "2D Array" << endl;
    vector<int> row;
    int n = 5;
    row.assign(n,0);//配置n個位置的陣列，裡面全放0
    vector <vector<int>> array_2D;
    array_2D.assign(n,row);
    for(int i = 0;i < array_2D.size();i++){
        for(int j = 0;j < row.size();j++){
            cout << array_2D[i][j] << " ";
        }
        cout << endl;
    }
}
