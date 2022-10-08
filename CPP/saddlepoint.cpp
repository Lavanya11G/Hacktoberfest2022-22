#include<iostream>
using namespace std;

int main() {

    int a[10][10], i, j, num;
    int sm, p, larg, f = 1;

    cout << "Enter size of Matrix:";
    cin>>num;

    cout << "Enter 2D array elements:";
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            cin >> a[i][j];
        }
    }

    cout << "2D Array List is :\n\n";
    for (i = 0; i < num; i++) {

        for (j = 0; j < num; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    for (i = 0; i < num; i++) {   // row vise
        p = 0;
        sm = a[i][0]; // row tranversing
        for (j = 0; j < num; j++) {    // column vise 
            if (sm >= a[i][j]) {
                sm = a[i][j];
                p = j;  // position change 
            }
        } // now we have the lagrest value in a clm 
        larg = 0;
        for (j = 0; j < num; j++) {
            if (larg < a[j][p]) {    // yaha minimum check kar rahe hai 
                larg = a[j][p];
            }
        }
        if (sm == larg) {
            cout << "\nValue of Saddle Point:" << sm;
            f = 0;
        }
    }

    if (f > 0) {
        cout << "\nNo Saddle Point ";
    }

    return 0;
}
