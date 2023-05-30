#include <iostream>
using namespace std;

class Report {

    int adno;
    string name;
    float *marks, average;

    float GetAvg() {
        float sum = 0;
        for(int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum/5;
    }

    public: // Access Specifier
        void ReadInfo(int _adNo, string _name, float _marks[]) {
            adno = _adNo, name = _name, marks = _marks;
            average = GetAvg();
        }

        void DisplayInfo() {
            float *baseAddress = &marks[0];
            cout << name << ", " << "\n";
            cout << "Admission Number ~ " << adno << endl;
            cout << "Marks ~ ";
            for(int i = 0; i < 5; i++) {
                cout << *(baseAddress++) << ", ";
            }
            cout << endl;
            cout << "Average Marks ~  " << average << endl;
            cout << "\n";
        }

};

int main() {

    Report R;
    float marks[5] = {100.0, 98.0, 90.0, 99.0, 97.0};
    R.ReadInfo(1452328, "Apurba Ghosh", marks); //? Cannot pass the Array directly without a Variable
    R.DisplayInfo();
}