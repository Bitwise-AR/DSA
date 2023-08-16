#include <iostream>
#include <string>
using namespace std;

class Occurrence {
private:
    string inp;
    char tc;

public:
    Occurrence(const string& str, char ch) : inp(str), tc(ch) {}

    int countOccurrence() {
        int count = 0;
        for (char c : inp) {
            if (c == tc) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    string str;
    char ch;

    cin >> str;
    cin >> ch;

    Occurrence occurrenceObj(str, ch);
    int result = occurrenceObj.countOccurrence();

    cout << result << endl;

    return 0;
}
