#include <stdio.h>
#include <ctype.h>
bool check_pointer(int a[], int n, int *p){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==p){
			return true;
		}else{
			return false;
		}
	}
}

bool check_same_pointers(int a[], int n, int *p1, int *p2)
{
    /  - false: n?u 2 con tr? ko tr? vào cùng 1 ph?n t? nào trong m?ng 
}

int get_distance_in_byte(int *a, int n, int *p1, int *p2)
{
    // N?i dung c?n hoàn thành
    // a: m?ng s? nguyên
    // n: s? ph?n t? trong m?ng a
    // p1: con tr? 1 
    // p2: con tr? 2 
    // Hàm tr? v?: 
    //    - N?u p1 và p2 thu?c m?ng, tr? v? kho?ng cách gi?a p1 và p2 
    //    - N?u 1 trong 2 con tr? ko thu?c m?ng, tr? v? -1 
}

int move_by_bytes_and_get_value(int *a, int n, int *p, int num_of_bytes)
{
    // N?i dung c?n hoàn thành
    // a: m?ng s? nguyên
    // n: s? ph?n t? trong m?ng a
    // p: con tr? 
    // num_of_bytes: s? byte s? di chuy?n 
    // Hàm tr? v? giá tr? t?i ô nh? sau khi di chuy?n con tr? 
}

int main()
{
    // Sample data
    const int n = 7;
    int a[n] = { 3, 1, 2, 8, 6, 10, 15 };
    int *p1 = a + 1;
    int *p2 = a + 3;
    int *p3 = NULL;
    int *p4 = a + 8;
    int *p5 = p2 - 2;
    // Test cau 1
    {
        cout << "Test 1.1: " << (check_pointer(a, n, p1) == true ? "Pass" : "Failed") << "\n";
        cout << "Test 1.2: " << (check_pointer(a, n, p2) == true ? "Pass" : "Failed") << "\n";
        cout << "Test 1.3: " << (check_pointer(a, n, p3) == false ? "Pass" : "Failed") << "\n";
        cout << "Test 1.4: " << (check_pointer(a, n, p4) == false ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }
    // Test cau 2
    {
        cout << "Test 2.1: " << (check_same_pointers(a, n, p1, p2) == false ? "Pass" : "Failed") << "\n";
        cout << "Test 2.2: " << (check_same_pointers(a, n, p1, p2-2) == true ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }
    // Test cau 3
    {
        cout << "Test 3.1: " << (get_distance_in_byte(a, n, p1, p2) == 8 ? "Pass" : "Failed") << "\n";
        cout << "Test 3.2: " << (get_distance_in_byte(a, n, p1, a+8) == -1 ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }
    // Test cau 4
    {
        cout << "Test 4.1: " << (move_by_bytes_and_get_value(a, n, p1, 4) == 2 ? "Pass" : "Failed") << "\n";
        cout << "Test 4.2: " << (move_by_bytes_and_get_value(a, n, p1, 12) == 6 ? "Pass" : "Failed") << "\n";
        cout << "Test 4.3: " << (move_by_bytes_and_get_value(a, n, p1, 3) == -1 ? "Pass" : "Failed") << "\n";
        cout << "Test 4.4: " << (move_by_bytes_and_get_value(a, n, p1, -1) == -1 ? "Pass" : "Failed") << "\n";
        cout << "----\n";
    }
}
