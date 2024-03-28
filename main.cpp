#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class Repetition {
    public:
    static void execute() {
        string input1;
        cin >> input1;

        int count = 1;
        int result = 0;
        for(int i=1; i<input1.length(); i++) {
            if(input1[i] != input1[i-1]) { // If previous is not same reset the counter.
                result = result < count ? count : result;
                count = 0;
            }
            count++;
        }
        result = result < count ? count : result; // AAAAAAA case
        cout << result;
    }
};

int main()
{
    Repetition::execute();
    return 0;
}
