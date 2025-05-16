#include <iostream>
#include <string>

using namespace std;

class Transport {
    public:
        int price;
        int speed;
        int numberOfPassengers;

        Transport(int p, int s, int n) {
            price = p;
            speed = s;
            numberOfPassengers = n;
        }

        void destination(string d);
};

void Transport::destination(string d) {
    cout << d << endl;
}
