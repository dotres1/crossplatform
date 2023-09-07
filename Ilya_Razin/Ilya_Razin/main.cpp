//
//  main.cpp
//  Ilya_Razin
//
//  Created by Илья on 06.09.2023.
//

#include <iostream>
using namespace std;

// функция для подсчёта суммы
int sum(int n, int m){
    return n + m;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    int b;
    cout << "Hello, World!\n";
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "a + b = " << sum(a,b) << endl;
    
    return 0;
}
