
#include <stdio.h>

main() {
        char lagi;
        char* str[]= {"Fettucini","Kunyit","Pangsit","Kenyal","Bakso","Sosis Panjang","Gehu Pedas"};
        int* harga[] = {4800,5200,65000,8000,10000,11500,12500};
        int i = 0;
        int pilih = 0, jmlpesan = 0, hargaAkhir = 0;
        int arraySize = sizeof(str)/sizeof(str[0]);

        do {
            system("clear"); //For Linux system
            //system("cls"); //For Windows system. (Uncomment this line until semicolon if your system is Windows)
            printf("MENU MAKANAN\n--------------\n");
            for(i=0;i<=arraySize-1;i++) printf("%d. %s (Rp%d)\n",i+1,str[i],harga[i]);
            printf("\nPilihj nomor: ");
            scanf("%d",&pilih);
            fflush(stdin);
            if(pilih>0&&pilih<=arraySize) {
                printf("Anda memilih %s.", str[pilih-1]);
                printf("\nMasukkan jumlah pesanan: ");
                scanf("%d", &jmlpesan); fflush(stdin);
                hargaAkhir = (int) harga[pilih-1]*jmlpesan;

                printf("\nSTRUK AKHIR\n-------------\n%dx %s\nHarga akhir: Rp%d",jmlpesan, str[pilih-1], hargaAkhir);
            } else {
                printf("Sayangnya, menu yang Anda pilih tidak tersedia.");
            }
                printf("\n\nIngin menampilkan menu lagi? (y/t): ");
                scanf("%c",&lagi); fflush(stdin);
        } while(lagi=='y');
        if(lagi=='t') printf("Terimakasih :(");
}
