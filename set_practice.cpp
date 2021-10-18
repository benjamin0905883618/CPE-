#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    //不能修改set內元素
    set<int> s{3,2,1,4,5,3};
    int arr[] = {1,2,3,6,7,8,9,10};
    set <int> s2(arr,arr+8);
    for(const auto &i : s){cout << i << " ";}//自動排序，忽略重複元素
    cout << endl;
    for(const auto &i : s2){cout << i << " ";}
    cout << endl;
    s.erase(3);
    for(const auto &i : s){cout << i << " ";}//自動排序，忽略重複元素
    cout << endl;
    cout << "if 3 exist ? " << s.count(3) << endl;
    s.erase(6); //刪除不存在的元素甚麼都不會發生
    for(const auto &i : s){cout << i << " ";}//自動排序，忽略重複元素
    cout << endl;
    s2.clear();
    cout << "Is s2 empty ? " << s2.empty() << endl;
    set <int> s3(arr,arr+8);
    set <int> intersect;
    set <int> uni;
    set <int> differ;
    set_intersection(s.begin(),s.end(),s3.begin(),s3.end(),inserter(intersect,intersect.begin()));
    cout << "< Intersection >" << endl;
    for(const auto &i : intersect){cout << i << " ";}//自動排序，忽略重複元素
    cout << endl;
    set_union(s.begin(),s.end(),s3.begin(),s3.end(),inserter(uni,uni.begin()));
    cout << "< union >" << endl;
    for(const auto &i : uni){cout << i << " ";}//自動排序，忽略重複元素
    cout << endl;
    set_difference(s.begin(),s.end(),s3.begin(),s3.end(),inserter(differ,differ.begin()));
    cout << "< difference >" << endl;
    for(const auto &i : differ){cout << i << " ";}//自動排序，忽略重複元素
    cout << endl;
    //s.find(element); 回傳找到element的位址
    //s.erase(pointer) || s.erase(element) 可以用位址或是直接輸入要刪除的值
}
