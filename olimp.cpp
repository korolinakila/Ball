#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> mass;
    int step, f=2, k=1, b=4;

    mass.push_back(k);
    mass.push_back(f);
    mass.push_back(b);
    for(int i=3; i<31; i++){
        mass.push_back(mass[i-1]+mass[i-2]+mass[i-3]);
    }
    cin >> step;
    cout << mass[step-1];
return 0;
}
