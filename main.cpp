#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class MissingNumber {
    public:
    static void execute() {
        long input;
        cin >> input;
        long input2[input-1];

        for(int i=0; i<input-1; i++) cin >> input2[i];

        ll total = 0;
        for(int i=1; i<=input; i++) total += i; // Adding 1 to N numbers

        ll inputTotal = 0;
        for(int i=0; i<input-1; i++) inputTotal += input2[i]; // Adding all the input numbers

        cout << total - inputTotal; // 15 - 11 -> 4
    }
};

int main()
{
    MissingNumber::execute();
    return 0;
}
