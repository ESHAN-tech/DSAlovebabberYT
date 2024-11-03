#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // Inserting elements using emplace_hint with proper hints
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


/*
set::emplace_hint() 
C++ STL ka ek built-in function hai jo ek naya element set me insert karta hai.
Function ke parameter me ek position pass ki jati hai jo ek hint ke roop me kaam karti hai jahan se searching operation shuru hota hai,
uske baad element ko uski current position par insert kiya jata hai. 
Position sirf process ko fast banane me madad karti hai, ye decide nahi karti ki naya element kahan insert hoga.
Naya element sirf set container ke properties ko follow karte hue insert hota hai.

Syntax:

arduino
Copy code
set_name.emplace_hint(iterator position, value)
Parameters:
position: Ye parameter ek hint ke roop me kaam karta hai jahan se searching operation kiya jata hai,
 element ko uski current position par insert karne se pehle. Position process ko fast karne me madad karti hai, 
 lekin naya element kahan insert hoga, ye decide nahi karti. Naya element set container ke properties ko follow karte hue insert hota hai.

value: Is parameter me wo element specify kiya jata hai jo set container me insert kiya jana hai.
 Agar ye value pehle se present nahi hai to set me insert kiya jata hai.
*/