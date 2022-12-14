#include<iostream>//TEMPLATE
#include<curses.h>//UNTUK ANIMASI
#include<Windows.h>//UNTUK SLEEP UNTUK WARNA
using namespace std;
int i,j;
bool cekAnswer(char jwb,string kj,string kj1,int soal){
	//FUNGSI UNTUK CEK KUNCI JAWABAN 
    if(jwb==kj[soal]||jwb==kj1[soal])return 1;
    else return 0;
}
int main(){
	system("color 0E");// SET WARNA
	initscr();//LOADING ANIMASI

		for(int j=0;j<110;j++){
			clear();
			mvprintw(10,j,"MATH QUIZ GAME");
			mvprintw(11,j,"LOADING SCREEN");
			mvprintw(12,j,"MATH QUIZ GAME");
			mvprintw(13,j,"LOADING SCREEN");
			mvprintw(14,j,"MATH QUIZ GAME");
			Sleep(30);
			refresh();
		}
	clear();
	mvprintw(10,50,"PRESS KEYBOARD TO START");
	getch();
    endwin();
    
    
    
    
    int score=0;//SET NILAI = 0
	string Soal[5]; // ARRAY SOAL
	string pilgan[5][4];// ARRAY PILGAN 
	//MEMBUAT SOAL.
	
	//INITIALIZE SOAL 1
	Soal[0]="(( p Or q ) And p ) Or p , Ekivalen Dengan";
    pilgan[0][0]="p";
    pilgan[0][1]="p or q";
    pilgan[0][2]="p and q";
    pilgan[0][3]="q";
    //INITIALIZE SOAL 2
	Soal[1]="Misalkan sebuah dadu bersisi enam dilantunkan satu kali. Didefinisikan: Kejadian A: { muncul angka genap} dan Kejadian B: { muncul angka kurang dari atau sama dengan 4}. Jika diasumsikan pelantunan dadu bersifat adil, tentukan P(A n B)";
	pilgan[1][0]="{1,3,5}";
    pilgan[1][1]="{2}";
    pilgan[1][2]="{2,4}";
    pilgan[1][3]="{3,5}";
    //INITIALIZE SOAL 3
	Soal[2]="Sebuah kotak berisi 3 Bola Merah dan 4 Bola Biru. Empat buah Bola diambil secara acak dari kotak tersebut. Berapa peluang terambil dua bola biru jika Keempat bola tersebut diambil secara acak tanpa pengembalian";
	pilgan[2][0]="0.28";
    pilgan[2][1]="0.38";
    pilgan[2][2]="0.58";
    pilgan[2][3]="0.88";
    //INITIALIZE SOAL 4
	Soal[3]="Enam kotak tersusun dalam dua baris, sehingga masing-masing baris terdiri dari 3 kotak. Empat buah bola dimasukkan secara acak ke dalam kotak-kotak tersebut, dengan aturan bahwa satu kotak hanya dapat berisi satu buah bola. Berapa peluang tidak ada bola yang masuk ke dalam kotak yang ada pada baris pertama?";
	pilgan[3][0]="0.28";
    pilgan[3][1]="0.38";
    pilgan[3][2]="0.58";
    pilgan[3][3]="0.88";
    //INITIALIZE SOAL 5
	Soal[4]="Enam kotak tersusun dalam dua baris, sehingga masing-masing baris terdiri dari 3 kotak. Empat buah bola dimasukkan secara acak ke dalam kotak-kotak tersebut, dengan aturan bahwa satu kotak hanya dapat berisi satu buah bola. Beraa Peluang Paling sedikit sebuah bola masuk ke dalam kotak yang ada pada baris pertama?";
	pilgan[4][0]="0";
    pilgan[4][1]="1";
    pilgan[4][2]="0.2";
    pilgan[4][3]="0.5";
    
    
    
	string jawaban="acaca";//KUNCI JAWABAN
	string jawaban2="ACACA";//KUNCI JWABAN
	string pg="abcd";
	
	//PRINT SOAL
	for(i=0;i<5;i++){
	    cout<<i+1<<". "<<Soal[i]<<endl;
	    cout<<endl;
	    for(j=0;j<4;j++){
	        cout<<"        "<<pg[j]<<". "<<pilgan[i][j]<<endl;
	    }
	    cout<<"\n\n\nMASUKAN JAWABAN = ";//INPUT JAWABAN
	    char answer; cin>>answer;
	    if(cekAnswer(answer,jawaban,jawaban2,i))score+=20;//FUNGSI UNTUK CEK JAWABAN BENAR ATAU SALAH
	    system("cls");//FUNGSI MEMBERSIHKAN LAYAR 
	}
	cout<<"Nilai = "<<score;//PRINT NILAI AKHIR
}
