#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    vector <int> v = {12,11,5,-98,22,12};
    reverse(v.begin()+1,v.begin()+4);
    cout << "Reverse" << endl;
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    sort(v.begin(),v.end());
    cout << "Sort" << endl;
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    cout << "Max : " << *max_element(v.begin(),v.end()) << endl;
    cout << "Min : " << *min_element(v.begin(),v.end()) << endl;
    cout << "Sum : " << accumulate(v.begin(),v.end(),0) << endl; //from numeric
    cout << "Count : " << count(v.begin(),v.end(),12) << endl;
    int position = find(v.begin(),v.end(),12) - v.begin();
    cout << "Find : "<< position << endl;
    cout << "Can binary search find something? " << binary_search(v.begin(),v.end(),12) << endl;
    cout << "Lower bound : " << *lower_bound(v.begin(),v.end(),4) << endl;
    cout << "Upper bound : " << *upper_bound(v.begin(),v.end(),12) << endl;
    v.erase(unique(v.begin(),v.end()),v.end());//delete repeat value
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    next_permutation(v.begin(),v.end());
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    cout << "Maximum position : " << distance(v.begin(),max_element(v.begin(),v.end())) << endl;

}
