#include <iostream>
using namespace std;

class Airport {

    int FlightNumber;
    string Destination;
    float Distance, fuel;

    void CalFuel() {
        if(Distance <= 1000) {
            fuel = 500;
        } else if(Distance > 1000 && Distance <= 2000) {
            fuel = 1100;
        } else if(Distance > 2000) {
            fuel = 2200;
        }
    }

    public: // Access Specifier
        void FeedInfo(int _flightNumber, string _destination, float _distance) {
            FlightNumber = _flightNumber, Destination = _destination, Distance = _distance;
            CalFuel();
        }
        void ShowInfo() {
            cout << "Flight Number ~ " << FlightNumber << "\nDestination ~ " << Destination << "\nDistance ~ " << Distance << "\nFuel Loaded ~ " << fuel << endl;
            cout << "\n";
            cout << "----------------";
            cout << "\n";
        }

};

int main() {
    Airport A1;
    A1.FeedInfo(12344, "New York (NYC)", 2356);
    A1.ShowInfo();

    Airport A2;
    A2.FeedInfo(12435, "Mumbai", 1256);
    A2.ShowInfo();
}