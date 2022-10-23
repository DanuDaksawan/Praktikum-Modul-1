#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359

void identitas(){
	printf("\t\t\t\t==========================================================\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t||                   Program Bangun Ruang               ||\n");
	printf("\t\t\t\t||           Menghitung Luas Permukaan & Volume         ||\n");
	printf("\t\t\t\t||             Praktikum Algoritma Pemrograman          ||\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t||                          oleh                        ||\n");
	printf("\t\t\t\t||                       Kelompok 2                     ||\n");
	printf("\t\t\t\t||                  Nama Anggota Kelompok               ||\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t||    I Nyoman Danu Daksawan R.           2205551062    ||\n");
	printf("\t\t\t\t||    Made Yurista Indani Sukma           2205551078    ||\n");
	printf("\t\t\t\t||    Kadek Jefrand Joe Paryan L.         2205551090    ||\n");
	printf("\t\t\t\t||    Putu Agung Januartha Putra K.       2205551105    ||\n");
	printf("\t\t\t\t||    I Putu Gung Sukma Nigraha           2205551119    ||\n");
	printf("\t\t\t\t||    I Gst Bgs Davin Dharma Ditya        2205551122    ||\n");
	printf("\t\t\t\t||    Ida Ayu Shri Agung Harini           2205551129    ||\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t||                                                      ||\n");
	printf("\t\t\t\t==========================================================\n");
	system("pause");
	system("cls");
}

int periksa_input(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list<0 || list>5 || check != '\n'){
		fflush(stdin);
		printf("\t\t\t\tINPUT KAMU SALAH!\n");
		printf("\t\t\t\tMASUKKAN INPUT YANG BENAR!\n");
		printf("\t\t\t\t\n");
		printf("\t\t\t\tMasukkan Pilihan operasi: ");
		return periksa_input();
	}else{
		return list;
	}
}
int periksa_dua(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list<0 || list>2 || check != '\n'){
		fflush(stdin);
		printf("\t\t\t\tINPUT KAMU SALAH!\n");
		printf("\t\t\t\tMASUKKAN INPUT YANG BENAR!\n");
		printf("\t\t\t\t\n");
		printf("\t\t\t\tMasukkan Pilihan operasi: ");
		return periksa_dua();
	}else{
		return list;
	}
}
int periksa_baca(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list!=9 && list!=0 || check != '\n'){
		fflush(stdin);
		printf("\t\t\t\tINPUT KAMU SALAH!\n");
		printf("\t\t\t\tMASUKKAN INPUT YANG BENAR!\n");
		printf("\t\t\t\t\n");
		printf("\t\t\t\tMasukkan Pilihan operasi: ");
		return periksa_baca();
	}else{
		return list;
	}
}
float periksa_float(){
	char check;
	float list;
	if(check=scanf("%f%c", &list, &check)!=2 || list<1 || check != '\n'){
		fflush(stdin);
		printf("INPUT KAMU SALAH!\n");
		printf("\t\t\t\t\n");
		printf("Masukkan angka yang benar: ");
		return periksa_float();
	}else{
		return list;
	}
}
float LuasPermukaan_Tabung (float r, float t){
	float luas_alasTabung = M_PI*r*r;
	float luas_selimutTabung = 2*M_PI*r*t;
	float luas_tutupTabung = M_PI*r*r;
	float LP_Tabung = luas_alasTabung + luas_selimutTabung + luas_tutupTabung;
	return LP_Tabung;
}
float Volume_Tabung (float r, float t){
	float luas_alasLingkaran = M_PI*r*r;
	float Volume_Tabung = luas_alasLingkaran*t;
	return Volume_Tabung;
}
float LuasPermukaan_Bola (float r){
	float luas_lingkaran = M_PI*r*r;
	float LP_Bola = 4*luas_lingkaran;
	return LP_Bola;
}
float Volume_Bola (float r){
	float Volume_Bola = (4.0/3)*M_PI*r*r*r;
	return Volume_Bola;
}
float Volume_limas_segiempat(float s, float t){
	float luas_alas = pow(s,2);
	float Volume_limas_segiempat = (luas_alas*t)/3;
	return Volume_limas_segiempat; 
} 
float Luas_Permukaan_limas_segiempat(float s, float t){
	float setengah_sisi = s/2;
	float tinggi_segitiga = sqrt((pow(setengah_sisi, 2))+(pow(t,2)));
	float luas_segitiga = (s*t)/2;
	float luas_alas = pow(s,2);
	float LP_limas_segiempat = luas_alas + (4*luas_segitiga);
	return LP_limas_segiempat;
}
float Volume_PrismaSegitiga (float a, float b, float c, float t){ 
	float luas_alas_PrismaSegitiga = (a*b)/2;
	float Volume_PrismaSegitiga = luas_alas_PrismaSegitiga*t; 
	return Volume_PrismaSegitiga;
}
float Luas_Permukaan_PrismaSegitiga (float a, float b, float c, float t){ 
	float luas_alas_PrismaSegitiga = (a*b)/2;
	float keliling_alas_PrismaSegitiga = a+b+c; 
	float LP_PrismaSegitiga = (2*luas_alas_PrismaSegitiga) + (keliling_alas_PrismaSegitiga*t); 
	return LP_PrismaSegitiga; 
}
float Luas_Permukaan_Kerucut (float r, float t){ 
	float luas_alas_Kerucut = M_PI*r*r;
	float s = sqrt(pow(r,2)+pow(t,2));
	float LP_Kerucut = M_PI*r*(r+s);
	return LP_Kerucut; 
}
float Volume_Kerucut (float r, float t){ 
	float luas_alas_Kerucut = M_PI*r*r;
	float Volume_Kerucut = (luas_alas_Kerucut*t)/3; 
	return Volume_Kerucut;
}

int main(){
	float a, b, c, s, p, l, t, r;
	int input, baca, dua;
	identitas();
	do{
		printf("\t\t\t\t===============================================================\n");
		printf("\t\t\t\t|                                                             |\n");
		printf("\t\t\t\t|      Menghitung Luas Permukaan dan Volume Bangun Ruang      |\n");
		printf("\t\t\t\t|      Pilihan operasi yang akan dikerjakan:                  |\n");
		printf("\t\t\t\t|       1. Tabung                                             |\n");
		printf("\t\t\t\t|       2. Bola                                               |\n");
		printf("\t\t\t\t|       3. Limas Segi Empat                                   |\n");
		printf("\t\t\t\t|       4. Prisma Segitiga                                    |\n");
		printf("\t\t\t\t|       5. Kerucut                                            |\n");
		printf("\t\t\t\t|       0. Keluar                                             |\n");
		printf("\t\t\t\t|                                                             |\n");
		printf("\t\t\t\t===============================================================\n");
		printf("\t\t\t\t Masukkan Pilihan operasi: ");
		input = periksa_input();
		system("cls");
		switch(input){
			case 1:
				printf("\t\t\t\t===================================================\n");
				printf("\t\t\t\t|                                                 |\n");
				printf("\t\t\t\t|      Pilihan Operasi:                           |\n");
				printf("\t\t\t\t|       1. Menghitung Luas Permukaan Tabung       |\n");
				printf("\t\t\t\t|       2. Menghitung Volume Tabung               |\n");
				printf("\t\t\t\t|       0. Keluar                                 |\n");
				printf("\t\t\t\t|                                                 |\n");
				printf("\t\t\t\t===================================================\n");
				printf("\t\t\t\t Masukkan Pilihan operasi: ");
				dua  = periksa_dua();
				system("cls");
				switch(dua){
					case 1:
						printf("Masukkan panjang jari jari : ");
						r = periksa_float();
						printf("Masukkaan tinggi tabung : ");
						t = periksa_float();
						printf("\n");
						printf("Luas Permukaan Tabung: %.2f m^2.\n", LuasPermukaan_Tabung(r, t));
						break;
					case 2:
						printf("Masukkan panjang jari jari : ");
						r = periksa_float();
						printf("Masukkaan tinggi tabung : ");
						t = periksa_float();
						printf("\n");
						printf("Volume Tabung: %.2f m^3.\n", Volume_Tabung(r, t));
						break;
					default:
						printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
						printf("\n\n");
				}
				break;
			case 2:
				printf("\t\t\t\t===================================================\n");
				printf("\t\t\t\t|                                                 |\n");
				printf("\t\t\t\t|      Pilihan Operasi:                           |\n");
				printf("\t\t\t\t|       1. Menghitung Luas Permukaan Bola         |\n");
				printf("\t\t\t\t|       2. Menghitung Volume Bola                 |\n");
				printf("\t\t\t\t|       0. Keluar                                 |\n");
				printf("\t\t\t\t|                                                 |\n");
				printf("\t\t\t\t===================================================\n");
				printf("\t\t\t\t Masukkan Pilihan operasi: ");
				dua = periksa_dua();
				system("cls");
				switch(dua){
					case 1:
						printf("Masukkan panjang jari jari : ");
						r = periksa_float();
						printf("\n");
						printf("Luas Permukaan Bola: %.2f m^2.\n", LuasPermukaan_Bola(r));
						break;
					case 2:
						printf("Masukkan panjang jari jari : ");
						r = periksa_float();
						printf("\n");
						printf("Volume Bola: %.2f m^3.\n", Volume_Bola(r));
						break;
					default:
						printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
						printf("\n\n");
				}
				break;
			case 3:
				printf("\t\t\t\t=============================================================\n");
				printf("\t\t\t\t|                                                           |\n");
				printf("\t\t\t\t|      Pilihan Operasi:                                     |\n");
				printf("\t\t\t\t|       1. Menghitung Luas Permukaan Limas Segi Empat       |\n");
				printf("\t\t\t\t|       2. Menghitung Volume Limas Segi Empat               |\n");
				printf("\t\t\t\t|       0. Keluar                                           |\n");
				printf("\t\t\t\t|                                                           |\n");
				printf("\t\t\t\t=============================================================\n");
				printf("\t\t\t\t Masukkan Pilihan operasi: ");
				dua  = periksa_dua();
				system("cls");
				switch(dua){
					case 1:
						printf("Masukkan sisi : ");
						s = periksa_float();
						printf("Masukkaan tinggi limas segi empat : ");
						t = periksa_float();
						printf("\n\n");
						printf("Luas Permukaan Limas Segi Empat: %.2f m^2.\n", Luas_Permukaan_limas_segiempat(s, t));
						break;
					case 2:
						printf("Masukkan sisi : ");
						s = periksa_float();
						printf("Masukkaan tinggi limas segi empat : ");
						t = periksa_float();
						printf("\n\n");
						printf("Volume Limas Segi Empat: %.2f m^3.\n", Volume_limas_segiempat(s, t));
						break;
					default:
						printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
						printf("\n\n");
				}
				break; 
			case 4:
				printf("\t\t\t\t============================================================\n");
				printf("\t\t\t\t|                                                          |\n");
				printf("\t\t\t\t|      Pilihan Operasi:                                    |\n");
				printf("\t\t\t\t|       1. Menghitung Luas Permukaan Prisma Segitiga       |\n");
				printf("\t\t\t\t|       2. Menghitung Volume Prisma Segitiga               |\n");
				printf("\t\t\t\t|       0. Keluar                                          |\n");
				printf("\t\t\t\t|                                                          |\n");
				printf("\t\t\t\t============================================================\n");
				printf("\t\t\t\t Masukkan Pilihan operasi: ");
				dua  = periksa_dua();
				system("cls");
				switch(dua){
					case 1:
						printf("Masukkan panjang sisi a: ");
						a = periksa_float();
						printf("Masukkan panjang sisi b: ");
						b = periksa_float();
						printf("Masukkan panjang sisi c: ");
						c = periksa_float();
						printf("Masukkan tinggi Prisma Segitiga: ");
						t = periksa_float();
						printf("\n\n"); 
						printf("Luas Permukaan Prisma Segitiga: %.2f m^2.\n", Luas_Permukaan_PrismaSegitiga(a, b, c, t));
						break;
					case 2:
						printf("Masukkan panjang sisi a: ");
						a = periksa_float();
						printf("Masukkan panjang sisi b: ");
						b = periksa_float();
						printf("Masukkan panjang sisi c: ");
						c = periksa_float();
						printf("Masukkan tinggi Prisma Segitiga: ");
						t = periksa_float();
						printf("\n\n"); 
						printf("Volume Permukaan Prisma Segitiga: %.2f m^3.\n", Volume_PrismaSegitiga(a, b, c, t));
						break;
					default:
						printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
						printf("\n\n");
				}
				break;
			case 5:
				printf("\t\t\t\t===================================================\n");
				printf("\t\t\t\t|                                                 |\n");
				printf("\t\t\t\t|      Pilihan Operasi:                           |\n");
				printf("\t\t\t\t|       1. Menghitung Luas Permukaan Kerucut      |\n");
				printf("\t\t\t\t|       2. Menghitung Volume Kerucut              |\n");
				printf("\t\t\t\t|       0. Keluar                                 |\n");
				printf("\t\t\t\t|                                                 |\n");
				printf("\t\t\t\t===================================================\n");
				printf("\t\t\t\t Masukkan Pilihan operasi: ");
				dua  = periksa_dua();
				system("cls");
				switch(dua){
					case 1:
					printf("Masukkan jari jari: ");
						r = periksa_float();
						printf("Masukkan tinggi Kerucut: ");
						t = periksa_float();
						printf("\n\n");
						printf("Luas Permukaan Kerucut: %.2f m^2.\n", Luas_Permukaan_Kerucut(r, t));
						break;
					case 2:
							printf("Masukkan jari jari: ");
						r = periksa_float();
						printf("Masukkan tinggi Kerucut: ");
						t = periksa_float();
						printf("\n\n");
						printf("Volume Kerucut: %.2f m^3.\n", Volume_Kerucut(r, t));
						break;
					default:
						printf("Terima kasih karena telah meluangkan waktu Anda :)\n");
						printf("\n\n");
				}
			break;
		default:
			printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
			printf("\n\n");
		}
		printf("Ingin melakukan operasi hitung lagi?\n");
		printf("(tidak = 0 / iya = 9)\n");
		printf("Masukkan input: ");
		printf("\n");
		baca = periksa_baca();
		system("cls");
	}while(baca == 9);
	system("pause");
	return 0;
}
