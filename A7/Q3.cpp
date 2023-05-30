#include <iostream>
using namespace std;

class Test {

    int TestCode, NoCandidate, CenterReqd;
    string Description;

    float CalCentr() {
        return NoCandidate/(100+1);
    }

    public: // Access Specifier
        void Schedule(int _testCode, string _description, int _noCandidate) {
            TestCode = _testCode, Description = _description, NoCandidate = _noCandidate;
            CenterReqd = CalCentr();
        }
        void DispTest() {
            cout << "Test Code ~ " << TestCode << "\nNumber of Candidates ~ " << NoCandidate << "\nDescription ~ " << Description << "\nCenter Required ~ " << CenterReqd << endl;
        }

};

int main() {

    // Declearing Objects
    Test T1;
    T1.Schedule(235189, "The Schedule for Test Centers", 230);
    T1.DispTest();
}
