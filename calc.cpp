#include <iostream>
using namespace std;


int add(int a, int b){
    return a + b;
}


int sub(int a, int b){
    return a - b;
}


int multi(int a, int b){
    // 掛け算の処理を記入する
}


int main(){
    int a, b;
    a = 5;
    b = 2;

    cout << a << "+" << b << "=";
    cout << add(a, b) << endl;

    cout << a << "-" << b << "=";
    cout << sub(a, b) << endl;

    cout << a << "x" << b << "=";
    cout << multi(a, b) << endl;

    return 0;
}
