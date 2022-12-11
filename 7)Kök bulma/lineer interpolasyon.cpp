#include <iostream>
#include <cmath>

using namespace std;

float f(float x){
	float y;
	y=x-pow(2,-x);
	return y;
}
float max(float g1,float g2,float xn) {
	float y1,y2;
	y1=xn-g1;
	y2=g2-xn;
	
	if(y1>y2){
		return y1;
	}
	else{
		return y2;
	}
}

int main() {
	
	// x-2^-x=0 // x-pow(2,-x)=0 ve [0,1] ve hata payý = 10^-5 ya da pow(10,-5)
	
	float g1,g2,e,g,y,s,gy;
	int n=0;
	
	e=pow(10,-5);
	g1=0;
	g2=1;
	s=1;
	n++;
	
	while(s>e){
		gy=y;
		y= ( (g1*f(g2))-(g2*f(g1)) )/( f(g2)-f(g1) );
		s=max(g1,g2,y);	
		g=f(y);
		if(g<=0){
			g1=y;
		}
		else{
			g2=y;
		}	
		n++;
		if(gy==y){
			break;
		}
	}
	
	printf("Yaklasik degeri x%d: %.5f",n-1,y);
	cout << endl;
/*	cout << "g1: " << g1 << endl;
	cout << "g2: " << g2 << endl;
	cout << "g: " << g << endl;
	cout << "n: " << n-1 << endl;
	cout << "s: " << s << endl; */
    system("pause");
}
