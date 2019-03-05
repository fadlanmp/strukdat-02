/*
Nama Program		: 
Nama				: Fadlan Mulya Priatna
NPM					: 140810180041
Tanggal Pembuatan	: 5 Maret 2019
Deskripsi Program	: 
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater bioskop;
	bioskop.room=7;
	strcpy(bioskop.seat,"J9");
	strcpy(bioskop.movieTitle,"Adit&Jarwo");
	
	cout<<bioskop.room<<endl;
	cout<<bioskop.seat<<endl;
	cout<<bioskop.movieTitle<<endl;
}