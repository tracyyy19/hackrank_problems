#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, k;
    
    // user input for query 
    int a,b; 
    
    // Enter no of indices and queries 
    cin >> n >> q;
    
    int *arr[n];
    
    for(int i=0; i<n ; i++){
        cin >> k ;
        arr[i] = new int[k];
        for (int x=0; x<k; x++) {
            cin >> arr[i][x];
        }
    }
    
    for(int i=0; i<q; i++){
        cin >> a >> b;
        cout << arr[a][b] << endl;
        
    }
    
    
    return 0;
}
