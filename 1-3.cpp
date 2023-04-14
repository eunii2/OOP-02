#include <iostream>
using namespace std;

int biggest(double a[], int b){
    double max = a[0];
    for (int b=1; b<5; b++){
        if(max <a[b]){
            max = a[b];
        }
    }
    cout << max;

    return 0;
}

int main(){
    double a[5];
    cout << "5개의 실수를 입력하라>>";

    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    cout << "제일 큰 수 =" << biggest(a,5) << endl;

}