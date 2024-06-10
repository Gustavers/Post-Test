
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int angka;
    cout << "Masukkan bilangan : ";
    cin >> angka;

    if (angka < 0) {
        cout << "Input tidak valid" << endl;
    } else {
        int result = factorial(angka);
        cout << "Faktorial dari " << angka << " adalah: " << result << endl;
    }

    return 0;
}