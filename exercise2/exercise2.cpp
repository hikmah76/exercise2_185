#include <iostream>
using namespace std;

class perpustakaan {
public:
	int penerbit;

	perpustakaan(int pPenerbit) :
		penerbit(pPenerbit)
	{
		cout << "Penerbit : " << "Gama Press" << "Joko" << endl;
		cout << "Penerbit : " << "Gama Press" << "Lia" << endl;
		cout << "Penerbit : " << "Gama Press" << "Giga" << endl;
	}
};

class perpustakaan {
public:
	int pengarang;

	perpustakaan(int pPengarang) :
		pengarang(pPengarang)
	{
		cout << "Pengarang : " << "Intan pariwara" << "Asroni" << endl;
		cout << "Pengarang : " << "Intan pariwara" << "Giga" << endl;
	}
};
 
class perpustakaan {
public:
	int buku;

	perpustakaan(int pBuku) :
		buku(pBuku)
	{
		cout << "Buku yang dikarang : " << "Joko" << "Fisika" "Algoritma" << endl;
		cout << "Buku yang dikarang : " << "Lia" << "Basisdata"  << endl;
		cout << "Buku yang dikarang : " << "Asroni" << "Dasar Pemrograman" << endl;
		cout << "Buku yang dikarang : " << "Giga" << "Matematika" "Multimedia 1" << endl;
		
	}
};

class penerbit:public perpustakaan {
public:
	
	void pesan() {
		cout << "Penerbit : " << "Gama Press" << "Joko" << endl;
		cout << "Penerbit : " << "Gama Press" << "Lia" << endl;
		cout << "Penerbit : " << "Gama Press" << "Giga" << endl;
	}
};

class pengarang :public perpustakaan {
public:

	void pesan() {
		cout << "Pengarang : " << "Intan pariwara" << "Asroni" << endl;
		cout << "Pengarang : " << "Intan pariwara" << "Giga" << endl;
	}
};

class buku :public perpustakaan {
public:

	void pesan() {
		cout << "Buku yang dikarang : " << "Joko" << "Fisika" "Algoritma" << endl;
		cout << "Buku yang dikarang : " << "Lia" << "Basisdata" << endl;
		cout << "Buku yang dikarang : " << "Asroni" << "Dasar Pemrograman" << endl;
		cout << "Buku yang dikarang : " << "Giga" << "Matematika" "Multimedia 1" << endl;
	}
};




int main() {
	penerbit* obyek;
	pengarang* obyek;
	buku* obyek;

	
	

	
	

}
