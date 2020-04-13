#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;


void Quet_hinh_thang_theo_Ox(int xa, int ya, int xb, int yb, int xc, int yc, int xd, int yd, int mauto){

    int x= xd;
    while(x >= xa){
        int ym2 = (yd-ya)*(x-xd)/(xd-xa) + yd;
        int ym1 = (yc-yb)*(x-xc)/(xc-xb) + yc;

        for(int i=ym1; i<=ym2; i++){
            putpixel(x,i, mauto);
        }
        x--;
        cout << ym2 << ' ' << ym1 << endl;
    }
}
int main(){
    int mauto = 3;
    initwindow(600,600);

    Quet_hinh_thang_theo_Ox(20, 250, 20, 250, 100, 50, 100, 350, mauto);// BBCA
    Quet_hinh_thang_theo_Ox(100, 350, 100, 50, 300,150, 300,150,mauto);//ACDD
    Quet_hinh_thang_theo_Ox(100, 350, 100, 350, 300,150, 300, 300, mauto);//AADC

    getch();
    return 0;
 }
