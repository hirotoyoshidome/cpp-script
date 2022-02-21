#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>


using namespace std;

/**
 * define before main function.
 */
void hello() {
    cout << "hello!!" << endl;
}

bool isOverFive(int num) {
    // cout << num << endl;
    if (num > 5) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, const char* argv[]) {
    cout << "start" << endl;

    // function.
    hello();

    // integer.
    int num = 5;
    cout << num << endl;

    // function with return.
    if (isOverFive(num)) {
        cout << "over five." << endl;
    } else {
        cout << "under five." << endl;
    }

    // bool and if statement.
    bool isGood = true;
    // isGood = false;
    if (isGood) {
        cout << "good." << endl;
    } else {
        cout << "not good." << endl;
    }

    // loop.
    for (int i = 0; i < 5; i++) {
        cout << i + 1;
    }
    cout << "" << endl;
    
    // loop.
    int cnt = 0;
    while(true) {
        if (cnt >= 10) {
            break;
        }
        cout << cnt + 1;
        cnt = cnt + 1;
    }
    cout << "" << endl;

    // array.
    std::string ary[2];
    ary[0] = "one";
    ary[1] = "two";

    // error.
    // ary[2] = "three";

    cout << ary[0] << endl;
    cout << ary[1] << endl;

    // cout << sizeof(ary) << endl;
    // cout << sizeof(*ary) << endl;
    int aryLength = sizeof(ary) / sizeof(*ary);

    for (int i = 0; i < aryLength; i++) {
        cout << ary[i] << endl;
    }

    // pointer.
    int p = 3;
    cout << p << endl; // 3
    cout << &p << endl; // address(equals)
    // cout << *p << endl; // error.

    // pointer type.
    int* po;
    cout << po << endl; // address
    po = &p;
    cout << po << endl; // address(equals)
    cout << *po << endl; // 3
    *po = 30;
    cout << *po << endl; // 30
    cout << po << endl; // address (equals)

    cout << "end" << endl;
    return 0;
}
