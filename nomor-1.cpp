#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int data [n] = {1,2,3,4,5,5};
    int caridata = 5;
    bool ketemu = false;
    int i;

for(i = 0;i < n;i++){
if (data[i] == caridata){
ketemu = true;
break;
}
}
cout << "data = {1,2,3,4,5,5}" << endl;

if(ketemu){
    cout << "angka " << caridata << " pada indeks ke -" << i << endl;
}
else {
    cout <<  "angka tidak ditemukan dalam data" << endl;
}
}



