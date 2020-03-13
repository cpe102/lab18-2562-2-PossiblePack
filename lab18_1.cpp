#include<iostream>
#include<cmath>
using namespace std;


struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	Rect R1,R2;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> R1.x >> R1.y >> R1.w >> R1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> R2.x >> R2.y >> R2.w >> R2.h;

	
	cout << "Overlap area = " << overlap(R1,R2);
		
	return 0;
}

double overlap(Rect a,Rect b){
	double diffxab = abs(a.x - b.x);
	double diffyab = abs(a.y - b.y);
	//x 
	double x2a = a.x + a.w;
	double x2b = b.x + b.w;
	double sumx = min(x2a,x2b) - max(a.x,b.x);
	//y
	double y2a = a.y - a.h;
	double y2b = b.y - b.h;
	double sumy = min(b.y,a.y) - max(y2a,y2b); 
	double inters = sumx*sumy;

	if(inters<0){
		return 0;
	}else{
		return inters;
	}

}



