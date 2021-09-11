#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int i = 0;i < cases; i++){
        int relatives;
        cin >> relatives;
        int *street_num = new int [relatives];
        for(int j = 0; j < relatives; j++){
            cin >> street_num[j];
        }
        sort(street_num, street_num + relatives);
        int middle = street_num[int(relatives / 2)];
        int sum = 0;
        for(int k = 0; k < relatives; k++){
            if(middle > street_num[k])
                sum += middle - street_num[k];
            else{
                sum += street_num[k] - middle;
            }
        }
        cout << sum << endl;
    }
}
