#include <iostream>

using namespace std;

void calculate_vehicles(int V, int W) {
    // Check constraints
    if (V < 2 || W < 2 || W % 2 != 0 || V > W / 2) {
        cout << "INVALID INPUT" << endl;
        return;
    }

    // Solve for TW (x) and FW (y)
    int TW = (4 * V - W) / 2;
    int FW = V - TW;

    // Check if TW and FW are non-negative integers
    if (TW < 0 || FW < 0) {
        cout << "INVALID INPUT" << endl;
        return;
    }

    cout << "TW = " << TW << " FW = " << FW << endl;
}

int main() {
    int V = 200;
    int W = 540;

    calculate_vehicles(V, W);
    calculate_vehicles(200, 600);


    return 0;
}
