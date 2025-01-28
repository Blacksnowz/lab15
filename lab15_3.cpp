#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1,2,4,6,9}; 
    double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 

    
    int *max_a = max_element(a, a + 5);
    cout << "Address of the highest value in array A is " << max_a << endl;
    cout << "The highest value in array A is " << *max_a << endl;

 
    double *max_b = max_element(b, b + 9);
    cout << "Address of the highest value in array B is " << max_b << endl;
    cout << "The highest value in array B is " << *max_b << endl;

    return 0;
}
