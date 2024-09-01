#include <iostream>
#include <cmath>
using namespace std;


int main() {
    
    int x, l,r;
    cin>>x;
    for(int i=1; i<=x; i++){
    cin>>l>>r;
   int length =0;
    for (int j = l ; j<=r; ){
      length ++;
      j +=length;
    }
 
   cout<<length<<endl;
 }
    
    return 0;
}