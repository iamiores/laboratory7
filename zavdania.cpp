#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
float start_x, end_x, step;

cout << "Enter a, b, h: ";
cin >> start_x >> end_x >> step;

float y, x = start_x;
while (x <= end_x + 0.1)
{
y = tan(x * x) - 3 + 2 * x;
cout << "x = " << x << setw(10) << "y = " << y << endl;
x += step;
}

// do 
// {
// y = tan(x * x) - 3 + 2 * x;
// cout << "x = " << x << setw(10) << "y = " << y << endl;
// x += step;
// } while (x <= end_x + 0.1);
return 0;
}