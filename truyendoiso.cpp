/*
Chuong trinh minh hoa truyen doi so cho ham main
CT tinh tong sao cho khi goi tu dong lenh
tinh tong n1 n2 thi in ra tong n1+n2
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    int n1, n2;
    if(argc != 3)
    {
        printf("Can su dung chuong trinh theo dang: Tinh tong 3 5 ");
    }
    else
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[2]);
        printf("Tong cua %d va %d la: %d", n1, n2, n1+n2);
    }
}