#include <iostream>
using namespace std;

int main() {
    // Chuong tr�nh 1
    int x = 1;
    int y = 2; 
    int z = 3; 
    int *p = &x;
    (*p)++; 
    p = &y; 
    (*p)--; 
    p = &z; 
    (*p)-=3;
    cout << "Chuong tr�nh 1: " << x << " " << y << " " << z << endl; 
    
    // Chuong tr�nh 2
    x = 1; // reset x
    int *q = &x; // t?o con tr? m?i q tr? d?n x
    (*p)++; 
    (*q)++;
    cout << "Chuong tr�nh 2: " << x << " " << *p<< " " << *q << endl;

    return 0;
}

