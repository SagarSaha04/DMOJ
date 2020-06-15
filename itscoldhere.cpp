#include <iostream>
#include <string>
using namespace std;
int main ()

{
    string city[10000];
    int temp[10000], k = 0, a = 200, b = 0;
    while (true)
    {
        cin >> city[k] >> temp[k];

        if (city[k] == "Waterloo") {
            k++;
            break;
        }
        else {
            k++;
            continue;
        }
    }

    for (int i = 0; i < k; ++i)
    {
        if (temp[i] < a) {
            a = temp[i];
            b = i;
        }
    }
    cout << city[b] << endl;

    return 0;
}
