#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/************************************************************************************************************
	
	fungsi getVocal digunakan untuk menemukan huruf-huruf vokal yg terdapat pada 'inputKalimat'
	fungsi ini membutuhkan parameter utama yaitu 'inputKalimat' yg didapatkan dari 'cin.get()' pada 'main()'
	fungsi ini akan mereturn datatype 'string' => kumpulan huruf vokal ('vocals')
	
************************************************************************************************************/
string getVocal(std::string inputKalimat){
	char vocalPembanding[] = {'a','i','u','e','o','A','I','U','E','O'};			//vokal pembanding(vokal yg ada)
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
	char konsonanPembanding [] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
	string konsonans;
	for(int i=0;i<inputKalimat.length();i++){
		for(int k=0;k<sizeof(konsonanPembanding);k++){
			if(inputKalimat.at(i) == konsonanPembanding[k]){
				konsonans.push_back(konsonanPembanding[k]);
			}
		}
	}
	return konsonans;
}

string getAngka(std::string inputKalimat){
	int angkaPembanding [] = {'0','1','2','3','4','5','6','7','8','9'};
	string angka;
	for(int i=0;i<inputKalimat.length();i++){
		for(int a=0;a<sizeof(angkaPembanding);a++){
			if(inputKalimat.at(i) == angkaPembanding[a]){
				angka.push_back(angkaPembanding[a]);
			}
		}
	}
	return angka;
}

string getSpace(std::string inputKalimat){
	int spacePembanding [] = {' '};
	string spaces;
	for(int i=0;i<inputKalimat.length();i++){
		for(int s=0;s<sizeof(spacePembanding);s++){
			if(inputKalimat.at(i) == spacePembanding[s]){
				spaces.push_back(spacePembanding[s]);
			}
		}
	}
	return spaces;
}

string getUnique(std::string response){
	string duplicates;
	for(int i=0;i<response.length();i++){
		char b = response.at(i);
		if(i==0 || response.at(i) != response.at(i-1)){
			duplicates.push_back(response.at(i));
		}
	}
	return duplicates;
}

int calcTotal(std::string inputKalimat){										//fungsi ini digunakan untuk menghitung jumlah karakter pada 'inputKalimat'
	return inputKalimat.length();												//'string.length()' adalah fungsi bawaan dari olah data string c++
}																				//jika datatypenya 'char[array]' gunakan 'sizeof(char)'																			

main(){
	char inputKalimat[500];
	string konsonan;
	string vocal;
	string angka;
	string space;
	string uniqueVocal;
	string uniqueKonsonan;
	string uniqueAngka;
	int totalChar;
	int totalVocal;
	int totalKonsonan;
	int totalAngka;
	int totalSpace;
	char lanjutkan;
	
	Pertanyaan:
		cout <<"Masukkan Kalimat Yang Ingin Diproses: ";
		cin.get(inputKalimat, 500);
		
		totalChar = calcTotal(inputKalimat);
		
		vocal = getVocal(inputKalimat);
		uniqueVocal = getUnique(vocal);
		totalVocal = calcTotal(vocal);
		
		konsonan = getKonsonan(inputKalimat);
		uniqueKonsonan = getUnique(konsonan);
		totalKonsonan = calcTotal(konsonan);
		
		angka = getAngka(inputKalimat);
		uniqueAngka = getUnique(angka);
		totalAngka = calcTotal(angka);
		
		space = getSpace(inputKalimat);
		totalSpace = calcTotal(space);
	
		cout <<"Total Character Dari Kalimat Yang Anda Masukkan: "<<totalChar<<endl<<endl;
					
		cout <<"Character Vocal: "<<vocal<<endl;
		//cout <<"Character Vocal Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<uniqueVocal<<endl;
		cout <<"Total Character Vocal: "<<totalVocal<<endl<<endl;	
			
		//cout <<"Character Konsonan Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<uniqueKonsonan<<endl;
		cout <<"Character Konsonan: "<<konsonan<<endl;
		cout <<"Total Character Konsonan: "<<totalKonsonan<<endl<<endl;
		
		//cout <<"Angka Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<angka<<endl;
		cout <<"Angka: "<<uniqueAngka<<endl;
		cout <<"Total Angkan: "<<totalAngka<<endl<<endl;
		
		//cout <<"Space Yang Terdapat Dari Kalimat Yang Anda Masukkan: "<<space<<endl;
		cout <<"Total Space: "<<totalSpace<<endl<<endl;
		
	Selesai:
		cout <<"Lanjut? [Y/T] ";
		cin >> lanjutkan;
		
		if (lanjutkan == 'Y' || lanjutkan == 'y'){
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			goto Pertanyaan;
			return 0;
		}
}


