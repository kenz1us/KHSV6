#include <iostream>
#include <iomanip>

using namespace std;

void b1(){
	cout<<"\t\t\t\tKARTU HASIL STUDI"<<endl;
}

void b2(string nim,string nama){
	cout<<"\t|NIM : "<<nim;
	cout<<"\t\t\tNAMA : "<<nama<<"\t\t    |"<<endl;
	
	
}

void b3(){
	cout<<"\t|NO\tKODE\tMATAKULIAH\tSKS\tNH\tNM\tBOBOT\t    |\n";
	
	
}

void garis(){
	cout<<"\t_____________________________________________________________________"<<endl;
}

int NMUTU(int na) {
	
	int nm = 0;
	if ((na>= 85) && (na<= 100)){
		nm = 4;
		
	}
	else if ((na >= 75) && (na <= 84)){
		nm = 3;
	}
	else if ((na >= 65) && (na <= 74)){
		nm = 2;
		
	}
	else if ((na >= 55) && (na <= 64)){
		nm = 1;
		
	}
	else if ((na >= 0) && (na <= 54)){
		nm = 0;
		
	}
	
	return nm;
}

char NHURUF(int na){ // na 98
	
	char nH;
	
	if ((na >= 85) && (na <= 100)){
		nH = 'A';
		
	}
    else if ((na >= 75) && (na <= 84)){
		nH = 'B';
		
	}
	else if ((na >= 65) && (na <= 74)){
		nH = 'C';
		
	}
	else if ((na >= 55) && (na <= 64)){
		nH = 'D';
		
	}
	else if ((na >= 0) && (na <= 54)){
		nH = 'E';
		
		
	}

	return nH;
}




main(){
	string nama = "KenZione";
	string nim = "225720111003";
	int na[3]={40,65,75};   //deklarasi nilai angka.
	int sks[3]={3,2,4};
	//                 0       1       2
	string kode[3]={"IF010","IF009","IF001"};
	string matkul[3]={"Pemrog Java","Basis data","Algoritma"};
	 
	
	char nh;
	int nm;
	int bobot;
	
	float totsks = 0;
	int totbot = 0;
	float ip ;
	
	b1(); 			//HASIL KARTU UJIAN
	
	garis(); 		// BARIS PEMBATAS
	b2(nim,nama); 	// TAMPILAN NAMA DAN NIM
	garis(); 		// BARIS PEMBATAS
	
	b3();			// CETAKKAN NO KODE MATKULIAH SKS NH NM BOBOT
	garis();		// BARIS PEMBATAS
	
	int b = 1;
	
	
	for(int i = 0; i < 3; i++){
		
		nh = NHURUF(na[i]);
	    nm = NMUTU(na[i]);
	    bobot = nm * sks[i];
	   
	    cout<<"\n\t"<<b++<<"\t"<<kode[i]<<"\t"<<matkul[i]<<"\t"
		<<sks[i]<<"\t"<<nh<<"\t"<<nm<<"\t"<<bobot;
	   
		totsks = totsks + sks[i];
		totbot = totbot + bobot;
		
		
		
	}
	int sksyad = 0;
	ip = totbot / totsks;
	if(ip >= 3.5){ // MENAMPILKAN SKS DARI NILAI IP
		sksyad=24;
	}else if(ip >= 3.0){
		sksyad=21;
	}else if(ip >= 2.5){
		sksyad=18;
	}else if(ip >= 2.0){
		sksyad=15;
	}else if(ip >= 0.0){
		sksyad=12;
	}
	cout<<endl;
	garis();		// BARIS PEMBATAS
	cout<<"\t Total \t\t\t\t"<<totsks<<"\t\t\t"<<totbot<<endl;
	cout<<"\t Indeks Prestasi \t = "<<setprecision(3)<<ip;
	cout<<"\n\t SKS SEMESTER YANG AKAN DATANG = "<<setprecision(3)<<sksyad;

	
	/*
	
	setprecision() fungsi nya menampilkan berapa angka yang 
	kita inginkan (MEMANIPULASI NILAI DESIMAL DI OUTPUT-AN)
	
	*/
		
	
}
