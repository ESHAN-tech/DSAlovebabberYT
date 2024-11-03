#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // Inserting elements using emplace_hint with proper hints

// auto it ka matlab hota hai ki C++ compiler khud hi it ka type decide/
//  karega, jo right-hand side expression se deduce kiya jata hai.
    auto it = s.emplace_hint(s.begin(), 1);  // Insert 1
    it = s.emplace_hint(it, 2);              // Insert 2 after 1
    it = s.emplace_hint(it, 3);              // Insert 3 after 2
    s.emplace_hint(s.begin(), 0);            // Insert 0 at the correct position

    // Displaying the elements of the set
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
