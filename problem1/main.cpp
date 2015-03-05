//
//  main.cpp
//  problem1
//
//  Created by yan zeng on 10/13/13.
//  Copyright (c) 2013 yan zeng. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    int sum = 0;
    int A[99];
    for (int i = 0 ; i < 99; i++) {
        cout << "please record the next solider's parch number:" << endl;
        cin >> A[i];
        if (A[i] > 100 || A[i] < 1) {
            cout << " please enter an interger between 1 to 100:" << endl;
            cin >> A[i];
        }
        for (int j = 0; j < i; j++) {
            if (A[j] ==A[i]) {
                cout << " you can't enter an existing number, please enter a new number:" << endl;
                cin >> A[i];
            }
        }
        sum = sum + A[i];
        
    }
    cout << "the Spy's parch number is " <<5050-sum ;
    return 0;
}

