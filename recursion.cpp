// File : Recursion.cpp
// Class: Data Structs
// Dev  : Catherine Silva
// Desc : Showing recursion
// --------------------------------------------------------
#include <iostream>


// Regular way:
/*----------------------------------------------------------
//Declaration
int sumArr (int arr[], int n);


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = 5; // number of elements to sum
    int sum = sumArr(arr, num);

    printf("sum = %d\n", sum);

    return 0;
}

int sumArr (int arr[], int n){
    int results = 0;

    for(int i = n - 1; i >= 0; i--) {
        results += arr[i];
    }

    return results;
}
----------------------------------------------------------*/

//Declaration
int sumArr (int arr[], int n);
int sumArrR(int arr[], int n);

// main
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = 5; // number of elements to sum
    int sum = sumArr(arr, num);

    printf("sum = %d\n", sum);

    sum = sumArrR(arr, num);

    printf("recursive sum = %d\n", sum);

    return 0;
}


int sumArr (int arr[], int n){
    int results = 0;

    for(int i = n - 1; i >= 0; i--) {
        results += arr[i];
    }

    return results;
}

//recursive function
int sumArrR (int arr[], int n) {

    if (n == 0) { //base-case
        return 0;

    }else {
        int result = sumArrR(arr, n - 1);
        return result + arr[n - 1];
    }
}