#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;
struct Toado{
    int x,y;
};

void To_mau_theo_duong_bien(int x, int y, int mauto, int maubien){

    int x1,x2;
    do{
        x1 = x;
        x2 = x;
        while(getpixel(x1-1,y) != maubien) x1--;
        while(getpixel(x2+1,y) != maubien) x2++;
        for(int i=x1; i<=x2; i++){
            putpixel(i,y,mauto);
        }

        while(getpixel(x1,y+1) == maubien) x1++;

        if(x1 <= x2){
            x = x1;
            y += 1;
        }
    }while(x1 <= x2);
}
int main()
{
    Toado tam;
    int bk;
    cout << "nhap toa do tam hinh tron : ";  cin >> tam.x >> tam.y;
    cout << "nhap ban kinh hinh tron = "; cin >> bk;

    Toado diem_bat_dau = {tam.x,tam.y-bk+1};
    int maubien = 2;
    int mauto = 4;
    initwindow(bk*8,bk*8);

    setcolor(2);
    circle(tam.x,tam.y,bk);

    To_mau_theo_duong_bien(diem_bat_dau.x,diem_bat_dau.y,mauto,maubien);
    getch();
    return 0;
}
