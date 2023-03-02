#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main()
{
    string myWord;

    cin >> myWord;
    transform(myWord.begin(), myWord.end(), myWord.begin(), ::tolower);
    myWord.erase(remove(myWord.begin(), myWord.end(), 'a'), myWord.end());
    myWord.erase(remove(myWord.begin(), myWord.end(), 'e'), myWord.end());
    myWord.erase(remove(myWord.begin(), myWord.end(), 'i'), myWord.end());
    myWord.erase(remove(myWord.begin(), myWord.end(), 'o'), myWord.end());
    myWord.erase(remove(myWord.begin(), myWord.end(), 'u'), myWord.end());
    myWord.erase(remove(myWord.begin(), myWord.end(), 'y'), myWord.end());

    for(int i = 0; i<myWord.length(); i++){
        cout<<"."<<myWord[i];
    }
    cout <<  endl;
    return 0;
}