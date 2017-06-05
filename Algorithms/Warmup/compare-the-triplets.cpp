#include <iostream>
using namespace std;

int main() {
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    int pa = 0, pb = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            pa += 1;
        else if (a[i] < b[i])
            pb += 1;
    }
    cout << pa << " " << pb << endl;
    return 0;
}
