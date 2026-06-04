#include <iostream>
using namespace std ;

int findMax(int arr[ ] , int n) {
    int max = arr[0] ;
     for (int i = 0 ; i < n ; i++) {
         if (arr[i] > max) {
             max = arr[i] ;
         }
     }
     return max ;
}

int main ( ) {
    int n = 5 ;
    int arr[ ] = {5, 10, 1, 8, 2} ;
    
    int ans = findMax(arr, n) ; 
    cout << ans ;
    
    return 0 ;
}
