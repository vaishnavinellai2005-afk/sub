#include <iostream>
#include <cstdlib>   // For system()

using namespace std;

int main() {
    
    cout << "Starting CAD Software Installation...\n";
    
    // Change the path to your installer file location
    system("start C:\\Users\\YourName\\Downloads\\SolidWorksSetup.exe");

    cout << "Installer Launched Successfully!\n";

    return 0;
}
