#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1,2,3};

    cout << v1[1] << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    return 0;
}

