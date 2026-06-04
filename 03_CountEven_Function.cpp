#include <iostream>
using namespace std ;

int countEven(int arr[ ] , int n) {
     int evenCount = 0 ;
     for (int i = 0 ; i < n ; i++) {
         if (arr[i] % 2 == 0) {
            evenCount++  ;
         }
     }
     return evenCount ;
}

int main ( ) {
    int n = 6 ;
    int arr[ ] = {1, 2, 3, 4, 5, 6} ;
    
    int ans = countEven(arr, n) ; 
    cout << ans ;
    
    return 0 ;
}
