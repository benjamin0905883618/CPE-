#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << s1 << endl;
    cout << s2 << endl;

    string s3 = s1 + s2;
    cout << "s1 size : "  << s1.size() << endl;
    cout << "is s1 empty : " << s1.empty() << endl;
    cout << "s1 length : " << s1.length() << endl;
    cout << "Find : " << s1.find(s2,0) << endl;
    cout << "s1 == s2 ? " << (s1 == s2) << endl;
    cout << "s1 < s3 ? " << (s1 < s3) << endl;

    cout << "Substr" << endl;
    cout << s1.substr(1,1) << endl;
    cout << s1.substr(1) << endl;

    //s.erase(position,number) 從position的位置開始往後移除number個元素
    //s.erase(s.begin(),s.begin() + 5) 移除前五個元素


}
