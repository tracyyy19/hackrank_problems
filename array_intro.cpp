#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; // size of array 
    
    cin >> n ; 
    
    int nums[n-1]; 
    
    for(int i=0; i<n ; i++){
        cin >> nums[i];
    }
    
    for (int j=(n-1) ; j>=0; j-- ){
        cout << nums[j] << " ";
    }
    
    return 0;
}

