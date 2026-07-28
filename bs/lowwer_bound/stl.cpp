#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> vect(size);

    for (int i = 0; i < size; i++)
        cin >> vect[i];

    int tar;
    cin >> tar;

    auto it = lower_bound(vect.begin(), vect.end(), tar);

	// Agar target sabse bada hai, to lower_bound vect.end() return karega.
	// vect.end() last element ke baad wali position ko point karta hai.

	cout << "Answer: " << it - vect.begin() << endl;
    

    return 0;
}