#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n; int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    vector<int> leaders;
    int maxR = arr[n-1];
    leaders.push_back(maxR);

    for(int i=n-2; i>=0; i--)
        if(arr[i] > maxR)
            leaders.push_back(maxR = arr[i]);

    for(int i=leaders.size()-1; i>=0; i--)
        cout << leaders[i] << " ";
}
