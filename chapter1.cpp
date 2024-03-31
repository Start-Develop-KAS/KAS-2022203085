#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
   
    int* pTime = new int[N];
  
    for (int i = 0; i < N; i++) {
        cin >> pTime[i];
    }

    sort(pTime, pTime + N);

    int total = 0;
    int sum = 0;

    for (int j = 1; j <= N; j++) {
        cin >> pTime[j - 1];
        for (int k = 0; k < j; k++) {
            sum += pTime[k];
        }
        total += sum;
        sum = 0;
    }

    cout << total << endl;

    return 0;
}