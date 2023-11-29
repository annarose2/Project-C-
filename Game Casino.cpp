#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

struct Kelompok
{
    int nomor;
    string kelompok;
};

int acakDadu()
{
	return rand() % 6 + 1;
}

int winGame(int dadu[], Kelompok anggota[], string pilihan[])
{
    int menang = 0;

    for(int i = 0; i < 2; i++)
	{
        for(int j = 0; j < 3; j++)
		{
            if(pilihan[i] == anggota[dadu[j] - 1].kelompok) menang++;
        }
    }
    return menang;
}

int main() {
    float modal, saldoSekarang = 0;
    string pasang[2];
    short angka[2];
    int dadu[3];
    int jumlahMenang;
    char choice;
    srand(time(0));
	int hubungan[6][6] = {{0, 1, 0, 1, 1, 0}, {1, 0, 1, 1, 1, 1}, {0, 1, 0, 0, 1, 1}, 
							{1, 1, 0, 0, 1, 0}, {1, 1, 1, 1, 0, 1}, {0, 1, 1, 0, 1, 0}};
    
	Kelompok anggota[6] = {{1, "EXO"}, {2, "BTS"}, {3, "BLACKPINK"}, {4, "2PM"}, {5, "ASTRO"}, {6, "AESPA"}};

	
 	while (true)
	{
		cout<<"\n========================================================================";
 		cout<<"\n    CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO    ";
 		cout<<"\n  CC          A  A      SS             III     NN N   NN   OO      OO   ";
 		cout<<"\n CC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO   ";
 		cout<<"\n  CC        AAAAAAAA           SS      III     NN   N NN   OO      OO   ";
 		cout<<"\n    CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO    ";
 		cout<<"\n========================================================================\n";
	
		cout << "\n\t\t      PAPAN PERMAINAN JUDI " << endl;
		cout << "\n\t\t ------------------------------- " << endl;
		cout << "\t\t |         |         |         | " << endl;
		cout << "\t\t |   EXO   |   BTS   |BLACKPINK| " << endl;
		cout << "\t\t |         |         |         | " << endl;
		cout << "\t\t ------------------------------- " << endl;
		cout << "\t\t |         |         |         | " << endl;
		cout << "\t\t |   2PM   |  ASTRO  |  AESPA  | " << endl;
		cout << "\t\t |         |         |         | " << endl;
		cout << "\t\t ------------------------------- " << endl;
		
   		cout << "Nominal Taruhan : Rp. ";
    	cin >> modal;
    
    	cout << endl;
    	for(int i = 0; i < 2; i++)
		{
        	cout << "Dipasang ke-" << i + 1 << " : ";
        	cin >> pasang[i];
    	}
		
		for(int i = 0; i < 2; i++)
		{
			for(int j = 0; j < 6; j++)
			{
				if(pasang[i] == anggota[j].kelompok)
				{
					angka[i] = anggota[j].nomor;
				}
			}
		}
		
		cout << endl;
		
		if (hubungan[angka[0]-1][angka[1]-1] != 1)
		{
			cout << "Kedua Pemasangan Anda Tidak Memiliki Hubungan !!!" << endl;
			cout << "Silahkan Lakukan Pemasangan Ulang " << endl;
			continue;
		}
		
    	for(int i = 0; i < 3; i++) 
		{
        	dadu[i] = acakDadu();
   		}
    	
		cout << endl;
		cout<< "Gambar Dadu Yang Keluar : ";
    	
		for(int i = 0; i < 3; i++) 
		{
       		for(int j = 0; j < 6; j++)
			   {
       			if(dadu[i] == anggota[j].nomor) cout << anggota[j].kelompok << " ";
			   }
		}

    	jumlahMenang = winGame(dadu, anggota, pasang);

    	cout << endl << endl << "Jumlah Nominal Menang: Rp. ";
    	if(jumlahMenang == 0)
		{
    		if(saldoSekarang == 0)
			{
            	saldoSekarang = 0;
        	}else
			{
            	saldoSekarang -= modal;
        	}
		}else
		{
        	saldoSekarang += ((jumlahMenang * modal)/2) + modal;
    	}
    	cout << saldoSekarang << endl;

    	insert_exit:
    	cout << endl << "Bermain Lagi? (y/n): ";
    	cin >> choice;
    	if (choice == 'Y' or choice == 'y') continue;
    	else if(choice == 'N' or choice == 'n') 
		{
			cout << endl << "Anda berhasil memperoleh Rp. " << saldoSekarang;
		}break;
    }
	return 0;	
}