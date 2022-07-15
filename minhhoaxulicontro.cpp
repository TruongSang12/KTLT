#include<iostream>
using namespace std;
int main()
{
    int a = 10; //khai bao bien a kieu int
    printf("Dia chi cua a la: %8x\n", &a);
    //khai bao con tro chua duoc bien a
    int *pa;
    //Cho pa chua dia chi cua a
    pa = &a;
    //In ra gia tri cua pa
    printf("Dia chi cua pa la: %8x", pa);
    //In kich thuoc con tro
    
}