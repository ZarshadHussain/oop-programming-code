#include<iostream>
using namespace std;


class Counter {
    int value;

public:
    Counter(int v = 0) : value(v) {}

    Counter operator++() {
        ++value;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);
    ++c;
    c.display(); // Output: Value: 6
    return 0;
}