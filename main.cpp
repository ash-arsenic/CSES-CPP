#include <bits/stdc++.h>

using namespace std;

class WierdAlgorithm {
    public:
    static void execute() {
        long input;
        cin >> input;
        while (input > 1) {
            cout << input << " ";
            input = input % 2 == 0 ? input/2 : input*3+1;
        }
        cout << 1;
    }
};

int main()
{
    WierdAlgorithm::execute();
    return 0;
}
