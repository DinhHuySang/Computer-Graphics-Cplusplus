- *Teacher : Mai Hong*
- *Learner : Dinh Huy Sang*

# Đề bài
A.3. Các thuật toán tô màu 

## Bài 1. 

	a) Trình bày thuật toán tô màu loang về 4 hướng biết màu biên: mb, màu tô: mt, điểm nằm 		trong hình cần tô (x, y). 

	b) Viết hàm tô màu loang cho thuật toán trên bằng ngôn ngữ C++. Áp dụng viết chương trình 		tô màu loang cho hình chữ nhật có đường chéo chính là (100, 50), (200, 100), màu biên là 		mầu đỏ, màu tô là màu xanh lá cây. 

	c) Chạy chương trình ý b) trên máy tính. 

## Bài 2. 

	a) Trình bày thuật toán tô màu hình thang cơ bản như hình vẽ 

	b) Viết hàm tô màu hình thang cơ bản cho thuật toán trên bằng ngôn ngữ C++. Áp dụng viết 		chương trình tô màu cho đa giác ABCDE với A(100, 150), B(200, 50), C(350, 150), D(300, 	250), E(150, 250). 

	c) Chạy chương trình ý b) trên máy tính. 

## Bài 3. 

	a) Trình bày thuật toán tô màu hình thang cơ bản như hình vẽ: 

	b) Viết hàm tô màu hình thang cơ bản cho thuật toán trên bằng ngôn ngữ C++. Áp dụng viết 		chương trình tô màu cho đa giác ABCDE với A(100, 350), B(20, 250), C(100, 50), D(300, 		150), 	E(300, 300). 

	c) Chạy chương trình ý b) trên máy tính. 

## Bài 4. 

	a) Trình bày thuật toán tô màu biên cho miền lồi theo trục Oy biết miền cần tô có màu 	biên: mb, màu tô: mt, điểm nằm trong hình cần tô (x, y). 

	b) Viết hàm tô màu biên cho thuật toán trên bằng ngôn ngữ C++. Áp dụng viết chương trình 		tô màu cho hình tròn tâm A(300, 200), bán kính R=100 với màu biên là màu xanh da trời, màu 		tô là màu đỏ. 

	c) Chạy chương trình ý b) trên máy tính. 

## Bài 5. 

	a) Trình bày thuật toán tô màu biên cho miền lồi theo trục Ox biết miền cần tô có màu 	biên: mb, màu tô: mt, điểm nằm trong hình cần tô (x, y). 

	b) Viết hàm tô màu biên cho thuật toán trên bằng ngôn ngữ C++. Áp dụng viết chương trình 		tô màu cho hình tròn tâm A(300, 200), bán kính R=100 với màu biên là màu xanh da trời, màu 		tô là màu đỏ. 

	c) Chạy chương trình ý b) trên máy tính 

 

  

# Giải 
**_Code trong thư mục Code_to_mau_loang_**

## Bai 1. 

### a) Thuật toán tô màu loang 4 hướng. 

	Thuật toán đệ quy: 

	-Bước 1: vẽ vùng biên cần tô. 

	-Bước 2: Xác định một điểm (x,y) là điểm bắt đầu tô bên trong vùng cần tô. 

	-Bước 3: Nếu (x,y) khác màu biên và màu nền thì ta tô các điểm (x,y+1), (x,y-1), 		(x+1,y), (x-1,y) - điểm lân cận 

	-Lặp lại bước 3 cho tới khi kết thúc. 

### B,c) Code 

 

## Bai 2. 

### a) Thuật toán Tô màu hình thang cơ bản theo Oy 

	Ta có 4 điểm A,B,C,D gồm 2 đáy AB và CD 

	Bước 1: Y=YA 

	Bước 2: Tính Xm1 và Xm2: 

	Xm1 = ((XD-XA)*(Y-YA)/(YD-YA))+XA 

	Xm2 = ((XC-XB)*(Y-YB)/(YC-YD))+XB 

	Bước 3: Nối M1(Xm1,Y) và M2 (Xm2,Y) bằng màu tô 

	Bước 4: Y = Y+1 

	Bước 5: Nếu Y<YD: Bước 2 

	Bước 6: Kết thúc. 

### B,c) Code 

 

## Bài 3: 

### a) Thuật toán Tô màu hình thang quét theo Ox 

	Bước 1: X = x1 

	Bước 2: Tính tọa độ Ym1 và Ym2: 

	Xm1 = ((YD-YA)*(X-XA)/(XD-XA))+YA 

	Xm2 = ((YC-YB)*(X-XB)/(XC-XD))+YB 

	Bước 3: Nối 2 điểm (X,Ym1) và (X,Ym2) bằng màu tô 

	Bước 4: Nếu X<X2 : Bước 2. 

	Bước 5: Kết thúc. 

### b) Code 

 

## Bài 4: 

### a) Thuật toán tô màu biên theo Oy 

	Với i=1 ta tô nửa trên còn i =-1 ta tô nửa dưới 

	Bước 1: Tìm biên trái nhất và biên phải nhất. 

	X1 = x, x2 = x 

	While(màu(x1-1,y) != màu biên) 

	X1 = X1-1 

	While(màu(X2+1,y) != màu biên) 

	X2 = X2+1 

	Bươc 2: Vẽ đoạn (X1,Y) và (X2,y) bằng màu tô 

	Bước 3: Tính điểm phát triển tiếp theo: 

	While(màu(X1,y+i) = màu biên) 

	X1 = X1+1 

	Bước 4: Nếu X1<=X2: X = X1, Y=Y+i, lặp lại Bước 1; 

	Bước 5 Kết thúc; 

 

### b,c) Code 

 

## Bài 5: 

### a) Thuật toán Tô màu đường biên theo Ox: 

	Với i=1 ta tô nửa phải, i=-1 ta tô nửa trái 

	Bước 1: Tìm biên trên và biên dưới nhất. 

	Y1 = Y; Y2=  Y 

	While(mau(x,y1-1) != màu biên): y1 = y1 –1 

	While(mau(x,y2+1) != màu biên): y2 = y2+1 

	Bước 2:Vẽ đoạn (x,y1) và (x,y2) bằng màu tô  

	Bước 3: Tính điểm phát triển tiếp theo: 

	While(mau(x+i,y1) = màu biên) y1 = y1+1; 

	Bước 4 Nếu y1 <=Y2: 

	Y= Y1, X = X+i: Bước 1: 

	Bước 5:Kết thúc. 

### b,c) Code 

