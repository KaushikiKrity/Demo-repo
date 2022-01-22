#include <iostream>

using namespace std;



void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int A[], int n){

    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (A[j] > A[j+1]){
                swap(&A[j], &A[j+1]);

            }
        }

    }
}

int main() {

    int A[5];
    int n=5;
    cout << "Enter 5 numbers : \n";
    for(int i=0;i<5;i++)
    {
      cin >> A[i];
    }


    BubbleSort(A, n);
    cout << "sorted array \n ";
     for(int i=0;i<n;i++)
    {
        cout << A[i] << "\n";
    }

    return 0;
}