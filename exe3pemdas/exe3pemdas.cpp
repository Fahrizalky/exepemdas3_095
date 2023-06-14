#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Penerbit {
public:
	string namaPenerbit;
};

class Pengarang {
public:
	string namaPengarang;
	vector<string> bukuDikarang;
	Penerbit* penerbit;
};

class Buku {
public:
	string judulBuku;
	Pengarang* pengarang;
};

int main() {
	Penerbit gamaPress;
	gamaPress.namaPenerbit = "Gama Press";

	Penerbit intanPariwara;
	intanPariwara.namaPenerbit = "Intan Pariwara";

	Pengarang joko;
	joko.namaPengarang = "Joko";
	joko.penerbit = &gamaPress;

	Pengarang lia;
	lia.namaPengarang = "lia";
	lia.penerbit = &gamaPress;

	Pengarang giga;
	giga.namaPengarang = "Giga";
	giga.penerbit = &gamaPress;

	Pengarang asroni;
	asroni.namaPengarang = "Asroni\nGiga";
	asroni.penerbit = &intanPariwara;



	Buku fisika;
	fisika.judulBuku = "Fisika";
	fisika.pengarang = &joko;
	joko.bukuDikarang.push_back(fisika.judulBuku);

	Buku algoritma;
	algoritma.judulBuku = "Algoritma";
	algoritma.pengarang = &joko;
	joko.bukuDikarang.push_back(algoritma.judulBuku);

	Buku basisData;
	basisData.judulBuku = "Basisdata";
	basisData.pengarang = &lia;
	lia.bukuDikarang.push_back(basisData.judulBuku);

	Buku dasarPemrograman;
	dasarPemrograman.judulBuku = "Dasar Pemrograman";
	dasarPemrograman.pengarang = &asroni;
	asroni.bukuDikarang.push_back(dasarPemrograman.judulBuku);

	Buku matematika;
	matematika.judulBuku = "Matematika";
	matematika.pengarang = &giga;
	giga.bukuDikarang.push_back(matematika.judulBuku);

	Buku multimedia;
	multimedia.judulBuku = "Multimedia 1";
	multimedia.pengarang = &giga;
	giga.bukuDikarang.push_back(multimedia.judulBuku);

	//output 1
	cout << "Daftar pengarang pada penerbit Gama Press :" << endl;
	for (Pengarang* pengarang : { &joko, &lia, &giga }) {
		if (pengarang->penerbit->namaPenerbit == "Gama Press") {
			cout << pengarang->namaPengarang << endl;
		}
	}

	cout << "\n";
	//output 2
	cout << "Daftar pengarang pada penerbit Intan Pariwara :" << endl;
	for (Pengarang* pengarang : { &asroni, &giga }) {
		if (pengarang->penerbit->namaPenerbit == "Intan Pariwara") {
			cout << pengarang->namaPengarang << endl;
		}
	}

	cout << "\n";
	//output 3
	cout << "Daftar penerbit yang diikuti Giga :" << endl;
	for (Penerbit* penerbit : { &gamaPress, &intanPariwara }) {
		if (penerbit->namaPenerbit == "Gama Press", "Intan Pariawara") {
			cout << penerbit->namaPenerbit << endl;
		}
	}

	cout << "\n";
	//output 4
	cout << "Daftar buku yang dikarang Joko:" << endl;
	for (string buku : joko.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";
	cout << "Daftar buku yang dikarang Lia:" << endl;
	for (string buku : lia.bukuDikarang) {
		cout << buku << endl;
	}

	cout << "\n";
	//output 5
	cout << "Daftar buku yang dikarang Asroni:" << endl;
	for (string buku : asroni.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";
	cout << "Daftar buku yang dikarang Giga:" << endl;
	for (string buku : giga.bukuDikarang) {
		cout << buku << endl;
	}



	return 0;

}