
/*
  upto certain decimal places
*/

#include <iostream>
#include <iomanip>  // Required for setprecision and fixed
using namespace std;

int main() {
    int w, d;
    cin >> w >> d;

    double ans = 5.00 + 2.00 * w + (0.5 / 10.0) * d;

    // Set fixed-point notation and precision to 2 decimal places
   cout<<"$" << fixed << setprecision(2) << ans << endl;

    return 0;
}
