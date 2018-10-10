#include <stdio.h>
int nuachuvi(int a, int b, int c){
    int i = a + b + c;
    return i / 2;
}
int main() {
    int a, b, c;

    printf("Nhap vao do dai 3 canh cua tam giac :");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == 0 || b == 0 || c == 0) {
        printf("Do dai 1 canh tam giac khong the bang 0");
        return 0;
    }
    if (a + b < c || a + c < b || b + c < a) {
        printf("Tong 2 canh cua tam giac luon lon hon 1 canh");
        return 0;
    }
    else{
        printf("Nua chu vi tam giac ABC la %d ",nuachuvi(a,b,c));
    }

}