#include <iostream>
#include <algorithm>
using namespace std;

int minMoves(int x, int y, int k) {
 
    int movesX = (x + k - 1) / k; 
    int movesY = (y + k - 1) / k; 
    
   
    return max(movesX, movesY);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        cout << minMoves(x, y, k) << endl;
    }
    return 0;
}
