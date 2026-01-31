#include<bits/stdc++.h>
using namespace std;


void print_even(int n){
    if(n==0) return;
    print_even(n-1);
    
    if(n%2 == 0){
        cout << n << " ";
    }
    
}

int factorial(int n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}

int power(int x, int n){
    if(n==0) return 1;
    return x*power(x, n-1);
}

int fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1) return true;

    if(arr[0]>arr[1]) return false;

    return isSorted(arr+1, size-1);
}

int sumOfArray(int arr[], int size){
    if(size == 1) return arr[0];

    return arr[0] + sumOfArray(arr+1, size-1);
}

bool linearSearch(int arr[], int size, int key){
    if(arr[0] == key) return true;
    if(size == 0) return false;

    return false || linearSearch(arr+1, size-1, key);
}

int linearSearchIndex(int arr[], int size, int key){
    cout << arr[0] << " " << size << endl;
    if(arr[0] == key) return size;
    if(size == 0) return -1;


    return linearSearch(arr+1, size-1, key);
}

int main(){

    print_even(10);

    cout << '\n' << factorial(5) << endl;
    
    cout << power(2,5) << endl;
    
    cout << fibonacci(5) << endl;
    

    int arr[] = {1,2,3,5,4,6};
    cout << isSorted(arr, 5) << endl;

    cout << sumOfArray(arr,5) << endl;

    cout << linearSearch(arr,5,6) << endl;

    cout << 6-linearSearchIndex(arr,6,3) << endl;
    
    
    return 0;
}