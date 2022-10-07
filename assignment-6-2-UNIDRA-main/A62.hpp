//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        // return n_th power number
        int ans = 1;
        for (int i = 0; i < n; i++) {
                ans *= 2;
        }
        return (double)ans;
}
double nthpowern(int n)
{
        // return n_th power number
        int ans = 1;
        for (int i = 0; i < n * -1; i++) {
                ans *= 2;
        }
        return 1 / (double)ans;
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
