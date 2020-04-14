#include <iostream>
using namespace std;

int quad(int x, int y) {
    if (x < 0 || y < 0) {
        return 3;
    }
    else if (x < 0 || y > 0) {
        return 2;
    }
    else if (x > 0 || y < 0) {
        return 4;
    }
    else if (x > 0 || y > 0) {
        return 1;
    }
}

int main(void) {
    int x = 0;
    int y = 0;

    cin >> x;
    cin >> y;

    cout << quad(x, y) << endl;

    return 0;
}