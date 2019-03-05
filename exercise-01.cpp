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

struct Orang{
	int umur;
	char nama[30];
	char jk[1];
	char goldar[1];
};

int main(){
	Orang orang;
	orang.umur=10;
	strcpy(orang.nama,"fahmi");
	strcpy(orang.jk,"L");
	strcpy(orang.goldar,"O");
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.jk<<endl;
	cout<<orang.goldar<<endl;
}
