#include <iostream>
using namespace std;

bool isEven(int value){
    return (value / 2) * 2 == value;
}

bool isEven1(int value){
    int a;
    for(int i = 0; i < 1073741825; i++){
        a = i * 2;
        if(a == value || a == -value){
            return true;
        }
    }
    return false;
}

bool isEven3(int value){
    return (value & 1) == 0;
}



int main(int argc, const char * argv[]) {
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << isEven(a) << endl;
    cout << isEven1(a) << endl;
    cout << isEven3(a) << endl;
    
}

