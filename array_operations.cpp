#include <iostream>
using namespace std;

int main() {
    int arr[100], n, ch, val, pos;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    do {
        cout << "\n1.Traverse 2.Length 3.Search 4.Max 5.Min 6.Insert 7.Delete 8.Linear Search 9.Exit\nChoice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;
            case 2:
                cout << "Length: " << n << endl;
                break;
            case 3:
                cout << "Enter value: "; cin >> val;
                for (pos = 0; pos < n && arr[pos] != val; pos++);
                if (pos < n) cout << "Found at " << pos << endl;
                else cout << "Not found\n";
                break;
            case 4:
                val = arr[0];
                for (int i = 1; i < n; i++) if (arr[i] > val) val = arr[i];
                cout << "Max: " << val << endl;
                break;
            case 5:
                val = arr[0];
                for (int i = 1; i < n; i++) if (arr[i] < val) val = arr[i];
                cout << "Min: " << val << endl;
                break;
            case 6:
                cout << "Value & Position: "; cin >> val >> pos;
                if (pos < 0 || pos > n) cout << "Invalid\n";
                else {
                    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
                    arr[pos] = val; n++;
                }
                break;
            case 7:
                cout << "Position: "; cin >> pos;
                if (pos < 0 || pos >= n) cout << "Invalid\n";
                else {
                    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                    n--;
                }
                break;
            case 8:
                cout << "Enter value: "; cin >> val;
                for (pos = 0; pos < n && arr[pos] != val; pos++);
                cout << (pos < n ? "Found\n" : "Not found\n");
                break;
        }
    } while (ch != 9);
}
