#include<iostream>
#include<algorithm>
#include<iomanip>

double pow(double num,int p){
    double result = 1;
    for(int i = 0;i < p;i++)
        result *= num;
    return result;
}

using namespace std;

int main(){
    int N;
    while(cin >> N){
        for(int j = 0;j < N;j++){
            double n,p,i;
            cin >> n >> p >> i;
            double q = 1 - p;
            double a1 = pow(q,i - 1) * p;
            double r = pow(q,n);
            //cout << r << endl;
            double answer = a1 / (1-r);
            if(p == 0)
                cout << "0.0000" << endl;
            else
                cout << fixed << setprecision(4) << answer << endl;
        }
    }
}
