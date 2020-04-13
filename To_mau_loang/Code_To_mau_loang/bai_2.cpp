#include <graphics.h>
#include <conio.h>
 using namespace std;


void Quet_hinh_thang_theo_Oy(int xa, int ya, int xb, int yb, int xc, int yc, int xd, int yd, int mauto){

    int y= ya;
    while(y <= yd){
        int xm1 = (xa-xd)*(y-ya)/(ya-yd) + xa;
        int xm2 = (xb-xc)*(y-yb)/(yb-yc) + xb;

        for(int i=xm1; i<=xm2; i++){
            putpixel(i,y, mauto);
        }
        y++;
    }
}
int main(){
    int mauto = 3;
    initwindow(600,600);

    Quet_hinh_thang_theo_Oy(200, 50,200, 50, 350, 150, 100, 150, mauto);// BBAC
    Quet_hinh_thang_theo_Oy(100, 150, 350, 150, 300, 250,300, 250,mauto);//ACDD
    Quet_hinh_thang_theo_Oy(100, 150, 100, 150, 300, 250, 150, 250, mauto);//AADE

    getch();
    return 0;
 }
