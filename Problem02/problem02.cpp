#include <iostream> 

int swap_int(int *ptr1, int *ptr2); 
 
int main ()
{ 
    int value1 = 0, value2 = 20; 
    int* ptr1 = &value1; 
    int* ptr2 = &value2; 

    std::cout << "Before : ptr1 = " << *ptr1 << " / ptr2 = " << *ptr2 << std::endl; 

    int num;
    num = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = num;

    std::cout << "After  : ptr1 = " << *ptr1 << " / ptr2 = " << *ptr2 << std::endl; 
 
    return 0; 
} 

