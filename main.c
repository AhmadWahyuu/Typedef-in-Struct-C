#include <stdio.h>
#include <string.h>

typedef char string[256];
typedef struct{
	string tanggal;
	string bulan;
	string tahun;
}lahir;
typedef struct{
	string NPM;
	string nama;
	lahir L;
	char kelas[1];
	float IPK;
}mahasiswa;
int InputDataMahasiswa (mahasiswa A){
	printf("Input Mahasiswa \n");
	printf("--------------- \n");
	printf("Nama  : );scanf(%[^\n]s",&A.nama);
	printf("NPM   : );scanf(%s",&A.NPM);
	printf("Tgl Lahir (contoh:DD MM YYYY)\n" );
	printf("TTL   : );scanf(%s%s%s",&A.l.tanggal,&A.l.bulan,&A.l.tahun);
	printf("Kelas : );scanf(%s",&A.kelas);
	printf("IPK   : );scanf(%f",&A.IPK);
	printf("\n\n\n");
	return A;
}
void OutputDataMahasiswa (mahasiswa A){
	printf("Data Mahasiswa\n");
	printf("--------------\n");
	printf("Nama : %s\n",A.nama);
	printf("NPM  : %s\n",A,NPM);
	printf("TTL  : %s - %s - %s\n",A.l.tanggal,A.l.bulan,A.l.tahun);
	printf("Kelas: %s\n",A.kelas);
	printf("IPK  : %2.f\n",A.IPK);
	printf("\n\n");
}
int main(){
	mahasiswa A;
	A = InputDataMahasiswa(A);
	OutputDataMahasiswa(A);
	return 0;
}



