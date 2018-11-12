#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

/************************************************************************************************************
	
	fungsi getVocal digunakan untuk menemukan huruf-huruf vokal yg terdapat pada 'inputKalimat'
	fungsi ini membutuhkan parameter utama yaitu 'inputKalimat' yg didapatkan dari 'cin.get()' pada 'main()'
	fungsi ini akan mereturn datatype 'string' => kumpulan huruf vokal ('vocals')
	
************************************************************************************************************/
string getVocal(std::string inputKalimat){
	char vocalPembanding[] = {'a','i','u','e','o','A','I','U','E','O','\0'};	//vokal pembanding(vokal yg ada)
	string vocals;																//vocals adalah variabel kosong bertype string yg nantinya akan diisi huruf vokal yg ditemukan dari loop 'inputKalimat' dengan 'vokalPembanding'
	for(int i=0;i<inputKalimat.length();i++){									//i = index yg disini dimulai dari urutan pertama = 0 || loop sebanyak total karakter yg terdapat pada 'inputKalimat' yg bertipe 'string'
		for(int v=0;v<sizeof(vocalPembanding);v++){								//v = vocalPembanding yg disini dimulai dari urutan pertama = 0 || loop sebanyak total karakter yg terdapat pada 'vokalPembanding' yg bertipe 'char[array]'
			if(inputKalimat.at(i) == vocalPembanding[v]){						//jika kondisi 'index' karakter 'inputKalimat' memenuhi syarat yaitu samadengan 'index' 'vocalPembanding'
				vocals.push_back(vocalPembanding[v]);							//maka masukkan karakter tersebut kedalam variabel vocals yg sudah disiapkan
			}
		}
	}
	return vocals;																//hasil proses dari loop yaitu huruf huruf yg ditemukan
}

/************************************************************************************************************
	
	fungsi getKonsonan digunakan untuk menemukan huruf-huruf konsonan yg terdapat pada 'inputKalimat'
	fungsi ini membutuhkan parameter utama yaitu 'inputKalimat' yg didapatkan dari 'cin.get()' pada 'main()'
	fungsi ini akan mereturn datatype 'string' => kumpulan huruf konsonan ('konsonans')
	
************************************************************************************************************/
string getKonsonan(std::string inputKalimat){
	char konsonan [] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z','\0'};
	string konsonans;
	for(int i=0;i<inputKalimat.length();i++){
		for(int k=0;k<sizeof(konsonan);k++){
			if(inputKalimat.at(i) == konsonan[k]){
				konsonans.push_back(konsonan[k]);
			}
		}
	}
	return konsonans;
}


int calcTotal(std::string inputKalimat){										//fungsi ini digunakan untuk menghitung jumlah karakter pada 'inputKalimat'
	return inputKalimat.length();												//string.length() adalah fungsi bawaan dari olah data string c++
}																				//jika datatypenya 'char[array]' panggil sizeof(char)																			

main(){
	char inputKalimat[500];
	string konsonan;
	string vocal;
	int totalChar;
	int totalVocal;
	int totalKonsonan;

	cout <<"Masukkan Kalimat Yang Ingin Diproses: ";
	cin.get(inputKalimat,500);
			
	totalChar = calcTotal(inputKalimat);
	vocal = getVocal(inputKalimat);
	totalVocal = calcTotal(vocal);
	konsonan = getKonsonan(inputKalimat);
	totalKonsonan = calcTotal(konsonan);
	
	cout <<"Total Character Dari Kalimat Yang Anda Masukkan: "<<totalChar<<endl<<endl;
	cout <<"Character Vocal Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<vocal<<endl;
	cout <<"Total Character Vocal Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<totalVocal<<endl<<endl;
	cout <<"Character Konsonan Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<konsonan<<endl;
	cout <<"Total Character Konsonan Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<totalKonsonan<<endl<<endl;
}


