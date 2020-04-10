#include <iostream>
#include <queue>
#include <conio.h>
#include <graphics.h>

using namespace std;
struct Toado{
    int x;
    int y;
};

void xu_li_duong_cheo(Toado a, Toado b,Toado &goc1, Toado &goc2, Toado &goc3, Toado &goc4){
    goc1 = {a.x,a.y};
    goc2 = {a.x,b.y};
    goc3 = {b.x,b.y};
    goc4 = {b.x,a.y};
}
int Round(float k){
    return k+0.5;
}

void ve_doan_thang_ngang(int &x1, int &y1, int &x2, int &y2, int maubien){
    if(x2<x1){
        swap(x1,x2);
        swap(y1,y2);
    }
    int x = x1;
    int y = y1;
    while(x<=x2){
        putpixel(x, y,maubien);
        x++;
    }
}

void ve_doan_thang_doc(int &x1, int &y1, int &x2, int &y2, int maubien){
     if(y2<y1){
        swap(x1,x2);
        swap(y1,y2);
    }
    int x = x1;
    int y = y1;
    while(y<=y2){
        putpixel(x, y,maubien);
        y++;
    }
}


void ve_hinh_chu_nhat(Toado diem1,Toado diem2,Toado diem3, Toado diem4, int maubien){
    ve_doan_thang_ngang(diem1.x,diem1.y,diem4.x,diem4.y,maubien);
    ve_doan_thang_ngang(diem2.x,diem2.y,diem3.x,diem3.y,maubien);
    ve_doan_thang_doc(diem1.x,diem1.y,diem2.x,diem2.y,maubien);
    ve_doan_thang_doc(diem3.x,diem3.y,diem4.x,diem4.y,maubien);
}


// Ham loang
void Loang_4_huong(int x, int y, int mauto, int maubien){
    int maunen = getpixel(x,y);
    queue <Toado> hang_doi;
    Toado init, sau;
    if(getpixel(x,y)==maunen && getpixel(x,y)!=maubien){
        init.x = x; init.y = y;
        putpixel(init.x,init.y,mauto);
        hang_doi.push(init);
        while(hang_doi.empty() != true){

            hang_doi.pop();

            if(getpixel(init.x+1,init.y)==maunen && getpixel(init.x+1,init.y)!=maubien){
                putpixel(init.x+1,init.y,mauto);
                sau.x = init.x+1;
                sau.y = init.y;
                hang_doi.push(sau);
            }

            if(getpixel(init.x-1,init.y)==maunen && getpixel(init.x-1,init.y)!=maubien){
                putpixel(init.x-1,init.y,mauto);
                sau.x = init.x-1;
                sau.y = init.y;
                hang_doi.push(sau);
            }

            if(getpixel(init.x,init.y+1)==maunen && getpixel(init.x,init.y+1)!=maubien){
                putpixel(init.x,init.y+1,mauto);
                sau.x = init.x;
                sau.y = init.y+1;
                hang_doi.push(sau);
            }

            if(getpixel(init.x,init.y-1)==maunen && getpixel(init.x,init.y-1)!=maubien){
                putpixel(init.x,init.y-1,mauto);
                sau.x = init.x;
                sau.y = init.y-1;
                hang_doi.push(sau);
            }
            init = hang_doi.front();
        }
    }
}
int main(){

    Toado diem_duoi;
    Toado diem_tren;

    diem_duoi = {100,50};
    diem_tren = {200,100};

    Toado goc1,goc2,goc3,goc4;
    xu_li_duong_cheo(diem_duoi,diem_tren,goc1,goc2,goc3,goc4);

    int maubien = 2;
    int mauto   = 4;

    initwindow(500,500);

    ve_hinh_chu_nhat(goc1,goc2,goc3,goc4,maubien);
    Loang_4_huong((goc1.x+goc3.x)/2,(goc1.y+goc3.y)/2,mauto,maubien);

    getch();
    return 0;
}
