#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    cout << "Launching MATLAB for Robot Simulation...\n";

    // This works if MATLAB is added to system PATH
    system("matlab");

    cout << "MATLAB Opened Successfully.\n";

    return 0;
}
