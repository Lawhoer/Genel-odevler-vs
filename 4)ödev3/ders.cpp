#include "ders.h"
#include <iostream>

using namespace std;

dersler::dersler(){
}

dersler::dersler(char _dersAdi,int _dersNotu){
	dersAdi=_dersAdi;
	notlar.push_back(_dersNotu);
}

int dersler::readOrtalama(){
	int top=0;
	
	for(int i=0;i<notlar.size();i++){		
		top+=notlar[i];
	}
	return top/notlar.size();
}

int dersler::readToplam(){
	int toplam=0;
	
	for(int i=0;i<notlar.size();i++){		
		toplam+=notlar[i];
	}	
	return toplam;
}

char dersler::readAdi(){
	return dersAdi;
}


void dersler::write(char _dersAdi,int _dersNotu){
	dersAdi=_dersAdi;
	notlar.push_back(_dersNotu);
}


void dersler::sil(){
	notlar.clear();
}
	
	



