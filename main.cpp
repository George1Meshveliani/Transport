#include <iostream>
#include <vector>
#include <string>
#include "Transport.h"
using namespace std;

class Taxi : public Transport {
    public:
        Taxi(int p, int s, int n) : Transport(p, s, n) {};
};

class Bus : Transport {
    public:
        Bus(int p, int s, int n) : Transport(p, s, n) {};
};


class Train : Transport {
    public:
        Train(int p, int s, int n) : Transport(p, s, n) {};
};

int main() {
    Taxi t(1, 2, 3);
    cout << t.numberOfPassengers << endl;
    
    t.destination("Tbilisi");
    return 0;
}
