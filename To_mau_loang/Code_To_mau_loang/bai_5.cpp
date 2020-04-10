#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;
struct Toado{
    int x,y;
};

void To_mau_theo_duong_bien(int x, int y, int mauto, int maubien){

    int y1,y2;
    do{
        y1 = y;
        y2 = y;
        while(getpixel(x,y1-1) != maubien) y1--;
        while(getpixel(x,y2+1) != maubien) y2++;
        for(int i=y1; i<=y2; i++){
            putpixel(x,i,mauto);
        }

        while(getpixel(x+1,y1) == maubien) y1++;

        if(y1 <= y2){
            y = y1;
            x += 1;
        }
    }while(y1 <= y2);
}
int main()
{
    Toado tam;
    int bk;
    cout << "nhap toa do tam hinh tron : ";  cin >> tam.x >> tam.y;
    cout << "nhap ban kinh hinh tron = "; cin >> bk;
    Toado diem_bat_dau = {tam.x-bk+1,tam.y};

    int maubien = 2;
    int mauto = 4;
    initwindow(bk*8,bk*8);

    setcolor(2);
    circle(tam.x,tam.y,bk);

    To_mau_theo_duong_bien(diem_bat_dau.x,diem_bat_dau.y,mauto,maubien);
    getch();
    return 0;
}
