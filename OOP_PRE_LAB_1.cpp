#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        cerr << "Failed to open input.txt" << endl;
        return 1;
    }

    int count, number, sum = 0;

    inputFile >> count; 

    for (int i = 0; i < count; i++) {
        inputFile >> number; 
        sum += number;
    }

    inputFile.close();

    cout << "Sum of " << count << " integers: " << sum << endl;

    return 0;
}
