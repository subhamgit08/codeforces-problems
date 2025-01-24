#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b, rubles_single_ride, rubles_m_ride, rubles_mixed_ride , rubles;
    cin >> n >> m >> a >> b;
    rubles_single_ride = (n * a);
    rubles_m_ride = ((n + m -1) / m) * b; 
    rubles_mixed_ride = (n / m) * b + (n % m) * a;
    rubles = min({rubles_single_ride,rubles_m_ride,rubles_mixed_ride});
    cout<<rubles<<endl;
    return 0;
}