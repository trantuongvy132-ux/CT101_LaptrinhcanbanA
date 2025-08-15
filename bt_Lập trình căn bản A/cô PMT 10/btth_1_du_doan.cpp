#include <iostream>
using namespace std;

int main() {
    // Chuong trình 1
    int x = 1;
    int y = 2; 
    int z = 3; 
    int *p = &x;
    (*p)++; 
    p = &y; 
    (*p)--; 
    p = &z; 
    (*p)-=3;
    cout << "Chuong trình 1: " << x << " " << y << " " << z << endl; 
    
    // Chuong trình 2
    x = 1; // reset x
    int *q = &x; // t?o con tr? m?i q tr? d?n x
    (*p)++; 
    (*q)++;
    cout << "Chuong trình 2: " << x << " " << *p<< " " << *q << endl;

    return 0;
}

