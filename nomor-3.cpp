
#include <iostream>
using namespace std;

int length = 5;
double a[] = {5,1,4,2,8};

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j = 0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

void print_array(double a[], int length) {
    for(int i =0; i < length; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    cout << "Data sebelum sorting :" << endl;
    print_array(a, length);
    bubble_sort(a, length);

    cout << "Data setelah sorting :" << endl;
    print_array(a, length);
}

