#include <iostream>
using namespace std;

// => When a func calls itself . Until a specified condition is met.
// If infinity recursion -> segmentation / stack overflow 
// To stop this -> Base Condition

int x = 0;

void f(int c){
    if (c == 3) return; // Base Condition -> to stop the recursion
    cout << c << endl;
    c++;
    f(c);
}
int main() 
{
    f(x);
    return 0;
}
