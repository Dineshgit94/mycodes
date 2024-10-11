#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   
    vector<int> arr = {1, 1, 1, 2, 2, 4, 5, 5, 6};

    
    int current = arr[0];
    int count = 1;

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] == current) {
            count++;
        } else {
            cout << current << "->" << count << "  ";
            current = arr[i];
            count = 1;
        }
    }


    cout << current << "->" << count << endl;

    return 0;
}
