
#include <iostream>
#include <string>

using namespace std;

int main() {
    string ab;
    int num;
    string sum;

    cin >> ab;

    sum = "";
    num = 1;

    for (int i = 0; i < ab.length(); i++) {
        if (i != ab.length() - 1 && ab[i] == ab[i + 1]) {
            num++;
        } else {
            sum += to_string(num) + ab[i];
            num = 1;
        }
    }

    cout << sum << endl;

    return 0;
}