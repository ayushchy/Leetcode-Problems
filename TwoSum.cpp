#include<iostream>

using namespace std;

void solution(int arr[], int sum) {

    //int n = sizeof(arr) / sizeof(arr[0]);
    int i,j, temp=0;
    int n = 6;

    for(i=0;i<n;i++){
        temp = (sum - arr[i]);
        for(j=i+1;i<n;j++){
            if(arr[j] == temp){
                cout<<arr[i]<<"+"<<arr[j]<<endl;
            }
        break;
        }
    }

}

int main() {

    int arr[] = {1,2,4,6,8};
    int sum = 7;
    solution(arr, sum);

    return 0;

}
