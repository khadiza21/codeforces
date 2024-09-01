#include <iostream>
using namespace std;

int main() {
    
    int x,a,b;
    cin>>x;
    
    for(int i=1; i<=x; i++){
     cin>>a>>b;
     int sum = a*1 + b*2 ;
     if(sum % 2 == 0){
         int half = sum / 2;
            if (half % 2 == 0 || (half % 2 == 1 && a > 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            } 
     }else{
         cout<<"NO"<<endl;
     }
    }
    
    return 0;
}