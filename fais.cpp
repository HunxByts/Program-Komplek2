// PROGRAM KOMPLEKS FAISSS
// BUAT TOKO HP
// RECODE TANPA IZIN/TANPA FORK KENA BALA 8 TURUNAN!!!
#include <iostream>

using namespace std;

int main(){
	int no, jmlh, hrg, total;
	string no_tlp, almt, nm, var_hp, br;
	char tanya;
	menu:
	cout<<"\033[1;32m _______  _______  ___   _______        _______  _______  ___      ___"<<endl;    
	cout<<"|       ||   _   ||   | |       |      |       ||       ||   |    |   |"<<endl;  
	cout<<"|    ___||  |_|  ||   | |  _____| ____ |       ||    ___||   |    |   |"<<endl;    
	cout<<"|   |___ |       ||   | | |_____ |____||       ||   |___ |   |    |   |"<<endl;    
	cout<<"|    ___||       ||   | |_____  |      |      _||    ___||   |___ |   |___"<<endl;
	cout<<"|   |    |   _   ||   |  _____| |      |     |_ |   |___ |       ||       |"<<endl;
	cout<<"|___|    |__| |__||___| |_______|      |_______||_______||_______||_______|"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"<>  SELAMAT  DATANG  DI  FAIS  -  CELL  DI  JAMIN  HARGA  MURAH  MERIAH  <>"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"[ NOMOR ]  [ BARANG ]					     [    HARGA   ]"<<endl;
	cout<<endl;
	cout<<"  [1] 	   OPPO A92					      RP.1.499.000"<<endl;
	cout<<"  [2] 	   OPPO A9				              RP.3.599.000"<<endl;
	cout<<"  [3] 	   OPPO A31					      RP.2.999.000"<<endl;
	cout<<"  [4] 	   OPPO A12					      RP.2.999.000"<<endl;
	cout<<"  [5] 	   OPPO A5s					      RP.1.899.000"<<endl;
	cout<<"  [6] 	   OPPO A1K					      RP.1.799.000"<<endl;
	cout<<"  [7] 	   OPPO R13					      RP.8.999.000"<<endl;
	cout<<"  [8] 	   REALME C11				      	      RP.1.500.000"<<endl;
	cout<<"  [9] 	   REALME C3	 	 		      	      RP.1.899.000"<<endl;
	cout<<"  [10] 	   REALME 5I				              RP.2.199.000"<<endl;
	cout<<"  [11] 	   IPHONE 12				      	      RP.20.499.000"<<endl;
	cout<<"  [12] 	   IPHONE 13 PRO			      	      RP.30.199.000"<<endl;
	cout<<"  [13] 	   KELUAR PROGRAM"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	user:	
	cout<<"[+] SILAHKAN PILIH NO 1 - 13 : ";cin>>no;
	cout<<endl;
		
	switch(no){
		case 1:
			var_hp = "OPO A92";
				
			hrg = 1499000;
			
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
				
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;				cout<<"Produk yang di beli  : OPPO A92"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 2:
			var_hp = "OPO A9";
				
			hrg = 3599000;
				
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : OPPO A9"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 3:
			var_hp = "OPO A31";
				
			hrg = 2999000;
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
				
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : OPPO A31"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 4:
			var_hp = "OPO A12";
			
			hrg = 2999000;
				
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : OPPO A12"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 5:
			var_hp = "OPO A5s";
			
			hrg = 1899000;
			
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
				
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : OPPO A5s"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 6:
			var_hp = "OPO A1K";
			
			hrg = 1799000;
			
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : OPPO A1K"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 7:
			var_hp = "OPO R13";
							
			hrg = 8999000;
			
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
					jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : OPPO R13"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 8:
			var_hp = "REALME C11";
			hrg = 1500000;
			
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : REALME C11"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 9:
			var_hp = "REALME C3";				
			hrg = 1899000;
				
			if(jmlh >= 1 ){
					jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : REALME C3"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 10:
			var_hp = "REALME 15I";
				
			hrg = 2199000;
				
			if(jmlh >= 1 ){
				jmlh += 1;
			}
				else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : REALME A5I"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 11:
			var_hp = "IPHONE 12";
			
			hrg = 20499000;
			
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : IPHONE 12"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 12:
			var_hp = "IPHONE 13 PRO";
		
			hrg = 30199000;
				
			if(jmlh >= 1 ){
				jmlh += 1;
			}
			else{
				jmlh = 1;
			}
			
			cout<<"Sedang memproses..."<<endl;
			cout<<endl;
			cout<<"Masukan nama anda    : ";cin>>nm;
			cout<<"Masukan alamat anda  : ";cin>>almt;
			cout<<"Masukan nomor telpon : ";cin>>no_tlp;
			cout<<"Jumlah barang        : ";cin>>jmlh;
			cout<<"Produk yang di beli  : IPHONE 13 PRO"<<endl;
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			break;
		case 13:
			cout<<"Terimakasih telah membeli HP di toko kami"<<endl;
			break;
		default:
			cout<<"Opsi menu tidak ada, silahkan ulang kembali"<<endl;
			break;
		}
	
	total = hrg * jmlh;
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<"|  .:: STRUK PEMBAYARAN FAIS-CELL ::.  |"<<endl;
	cout<<"|--------------------------------------|"<<endl;
	cout<<"|   Jl. Coding-tech Block A (PY City)  |"<<endl;
	cout<<"|  Fais-Cell Murah meriah harga broo!! |"<<endl;
	cout<<"========================================"<<endl;
	cout<<"Nama Pembeli : "<<nm<<endl;
	cout<<"Alamat       : "<<almt<<endl;
	cout<<"No telpon    : "<<no_tlp<<endl;
	cout<<"Barang       : "<<br<<endl;
	cout<<"Merk barang  : "<<var_hp<<endl;
	cout<<"Jumlah       : "<<jmlh<<endl;
	cout<<"Harga total  : Rp."<<total<<endl;
	cout<<"========================================"<<endl;
	cout<<"| .:: TERIMAKASIH TELAH BERBELANJA ::. |"<<endl;
	cout<<"========================================\n"<<endl;
	
	cout<<"Mau beli lagi gak banh ^_^ [Y/T] : ";cin>>tanya;
	
	if(tanya == 'Y' || tanya == 'y'){
		goto menu;
		goto user;
	}
	else{
		cout<<endl;
		cout<<"Yaudah program nya selesai :)"<<endl;
		
	}
	return 0;
	//program kompleks di buat sederhana mungkin 
	//agar mudah di pahami
	//salam Faiss | Huntrx 
	// # Gk papa coding yang penting jangan lupa sholat 5 waktu :)
}
