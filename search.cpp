#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	int da[100],cari,jmlh=0;
	bool bol=false;
    srand(time(0));

	for(int i=0;i<100;i++){

        da[i]=rand()%100+1;

	}

	printf("masukkan data yang di cari : ");
	scanf("%d",&cari);

	for(int i=0;i<100;i++){
        if(da[i]==cari){
            bol=true;
            jmlh++;
        }
	}

	if(bol==true){
            printf("data ada \n");
        }else{
            printf("Data Tidak ada\n");
        }
    printf("jumlah data anda : %d",jmlh);


}
