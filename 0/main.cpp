#include <iostream>

using namespace std;

void print(int a, int b) {

    for (int i = 0; i < b; i++) {
        cout << " ";
    }
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << endl;
}

void tab(int b) {

    for (int i = 0; i < b; i++) {
        cout << " ";
    }

}

void tree(int n, int m, int i = 1) {

    tab(m);
    print(i,n-i/2);
    if (i < 2*n+1)
        tree(n, m, i + 2);

}

void treee(int n, int i = 1) {

    if (i <= n) {
        tree(i,n-i);
        treee(n, i + 1);
    }

}

int main() {
    int n;
    cin>>n;
    treee(n);

}
