#include <iostream>
using namespace std;

int main() {
    int a[50][50];
    int b[50][50];
    int c[50][50];
    int an, am;
    int bn, bm;
    cout << "How many rows for table A?: ";
    cin >> an;
    cout << "How many columns for table A?: ";
    cin >> am;
    cout << "Enter " << an * am << " data for table A:" << endl;

    for (int i = 0; i < an; i++) {
        for (int j = 0; j < am; j++) {
            cin >> a[i][j];
        }
    }

    cout << "How many rows for table B?: ";
    cin >> bn;
    cout << "How many columns for table B?: ";
    cin >> bm;
    cout << "Enter " << bn * bm << " data for table B:" << endl;

    for (int i = 0; i < bn; i++) {
        for (int j = 0; j < bm; j++) {
            cin >> b[i][j];
        }
    }

    if (an == bn && am == bm) {
        for (int i = 0; i < an; i++) {
            for (int j = 0; j < am; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    } else {
        cout << "table A and  B must have the same dimensions for addition." << endl;
    }

    cout << "Result C:" << endl;
    for (int i = 0; i < an; i++) {
        for (int j = 0; j < am; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
