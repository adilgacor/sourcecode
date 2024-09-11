#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>
//Muhammad Adil Ridayu
//1MIN
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, coord);
}

int main (){
cout<<endl;
cout<<"\t BIODATA MAHASISWA"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Nama                         | Muhammad Adil Ridayu                       |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| NIM                          |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Jurusan                      |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Tempat Lahir                 |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Tanggal Lahir                |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Jenis Kelamin                |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Agama                        |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| No. HP                       |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Email                        |                                            |"<<endl;
cout<<"============================================================================="<<endl;
cout<<"| Alamat                       |                                            |"<<endl;
cout<<"============================================================================="<<endl;


    int jumMhs[3][4] = {0}; // Array 2D untuk menyimpan nilai
    int totalMhs[3] = {0}; // Array 1D untuk menyimpan total setiap b

    for (int b = 0; b < 3; b++) {
        int enter = 0;
        for (int c = 0; c < 4; c++) { // Ubah batas dari c<=3 ke c<4
            gotoxy(20 + (b + 1) - (b + 6), 7 + c + enter);
            cin >> jumMhs[b][c];
            totalMhs[b] += jumMhs[b][c];
            enter++;
        }
    }

    // OUTPUT HASIL
    for (int b = 0; b < 3; b++) {
        gotoxy(20 + (b + 1) - (b + 6), 15);
        cout << totalMhs[b];
    }

    return 0;
    
}

