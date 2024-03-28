#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class Permutations {
    public:
    static void execute() {
        int input1;
        cin >> input1;
        if((input1 == 3) || (input1 == 2)) { // Edge case
            cout << "NO SOLUTION";
            return;
        }

        for(int i=2; i<=input1; i+=2) cout << i << " "; // Print all even number in ascending order.
        for(int i=1; i<=input1; i+=2) cout << i << " "; // Print all odd number in ascending order.
    }
};

int main()
{
    Permutations::execute();
    return 0;
}
