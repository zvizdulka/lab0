#include <iostream>
using namespace std;

bool isEven(int value){
    return (value & 1) == 0;
}

int main(int argc, const char * argv[]) {
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << isEven(a) << endl;
}

