#include <iostream>
using namespace std;

class Batsman {

    int b_code, innings, not_out, runs;
    char bname[21];
    float bat_avg;

    void calcavg() {
        bat_avg = runs/(innings-not_out);
    }

    public: // Access Specifier
        void read_data(int _bCode, char *_bname, int _innings, int _notout, int _runs) {
            b_code = _bCode, innings = _innings, not_out = _notout, runs = _runs;
            strcpy(bname, _bname);
            calcavg();
        }
        void displaydata() {
            cout << "Batsman Name ~ " << bname << "\tBatsman Code ~ " << b_code << endl;
            cout << "\tInnings ~ " << innings << "\n\tNot Out ~ " << not_out << "\n\tRuns ~ " << runs << "\n\tBat Average ~ " << bat_avg << endl;
            cout << "\n";
        }

};


int main() {

    // Declearing Objects
    Batsman B1;
    B1.read_data(232210, "Sachin Tendulkar", 20, 18, 1200);
    B1.displaydata();
}