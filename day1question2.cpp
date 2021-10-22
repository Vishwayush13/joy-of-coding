// Day1 question 2: by vishwayush 
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, count;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " numbers in the array: ";
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    
    
    map<int, int> frequency;
    for(int i=0; i<n; i++){
        frequency[array[i]]++;
    }
    for(auto x: frequency){
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}