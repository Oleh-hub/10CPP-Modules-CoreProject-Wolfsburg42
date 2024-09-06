#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("ifstream.txt"); // 'file' is an object of type 'ifstream'
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }
    return 0;
}
