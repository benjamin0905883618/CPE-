#include<iostream>
using namespace std;

int run(int input){
    //cout << input << " ";
    int time = 0;
    while(true){
        if(input == 1)
            break;
        if(input % 2 != 0)
            input = 3 * input + 1;
        else
            input /= 2;
        time++;
    } 
    return time;
}

int main(){
    int i,j;
    while(cin >> i >> j){
        int answer = 0;
        for(int k = i;k <= j;k++){
            int temp = run(k);
            if(temp > answer)
                answer = temp;
        }
        cout  << i << " " << j << " " << answer + 1 << endl;
    }

}
