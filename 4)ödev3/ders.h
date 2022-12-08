#ifndef ders_H
#define ders_H
#include <vector>
#include <iostream>

using namespace std;

class dersler{
	public:
	     dersler();
		 dersler(char dersAdi,int dersNotu);
		 int readOrtalama();
		 int readToplam();
		 char readAdi();	
		 void write(char dersAdi, int dersNotu);
		 void sil();
	private:
	     char dersAdi;
		 vector <int> notlar;	 
	
};
#endif
