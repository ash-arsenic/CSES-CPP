#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class IncreasingArray {
    public:
    static void execute() {
        int input1;
        cin >> input1;

        int input2[input1];
        for(int i=0; i<input1; i++) cin >> input2[i];

        long result = 0;
        for(int i=1; i<input1; i++) {
            int diff = input2[i-1] - input2[i]; // Get the difference
            if(diff > 0) {
                input2[i] += diff; // Update the current element
                result += diff; // Add all the difference
            }
        }

        cout << result;
    }
};

int main()
{
    IncreasingArray::execute();
    return 0;
}
