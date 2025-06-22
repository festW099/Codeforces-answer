#include <iostream>
#include <algorithm> // для функции min

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_soda = k * l;
    int total_limes = c * d;

    int toasts_soda = total_soda / (n * nl);
    int toasts_limes = total_limes / n;
    int toasts_salt = p / (n * np);

    int max_toasts = min({toasts_soda, toasts_limes, toasts_salt});
    cout << max_toasts << endl;

    return 0;
}