// #include <iostream>
// using namespace std;
// int main(){
// string buah;
// int jumlah,jumlah2,sisa;
//     cout<<"Nama Buah : " <<endl;
//     cin>>buah;
//     cout<<"Jumlah Buah Awal : "<<endl;
//     cin>>jumlah2;
//     cout<<"Silahkan Masukan Jumlah Buah Yang Akan Dibagikan (1-2): "<<endl;
//     cin>>jumlah;
//     switch(jumlah)
//     case 1 : {
//         cout<<"Anda Akan Membagikan Buah Sebanyak 1 "<<buah<<endl;
//         sisa = jumlah2 - jumlah;
//         cout<<" Jadi Sisa Buah Yang Akan Dibagikan "<<sisa<<endl;
//         cout<<" Maka Per Orang Akan Mendapatkan Buah Sebanyak "<<jumlah<<endl;
//         break;
//     case 2 : 
//         cout<<"Anda Akan Membagikan Buah Sebanyak 2 "<<buah<<endl;
//         sisa = jumlah2 - jumlah;
//         cout<<" Jadi Sisa Buah Yang Akan Dibagikan "<<sisa<<endl;
//         cout<<" Maka Per Orang Akan Mendapatkan Buah Sebanyak "<<jumlah<<endl;
//         break;
//     default : 
//     cout<<"Mohon Maaf Jumlah Buah Kurang "<<endl;



//     }
// }

#include <iostream>
using namespace std;
int main(){
string buah;
int jumlah,jumlah2,sisa;
    cout<<"Nama Buah : ";
    cin>>buah;
    cout<<"Jumlah Buah Awal : ";
    cin>>jumlah2;
    cout<<"Silahkan Masukan Jumlah Buah Yang Akan Dibagikan: ";
    cin>>jumlah;
if(jumlah < jumlah2){
    sisa = jumlah2 - jumlah;
    cout<<"Anda Membagikan Buah "<<buah<<endl;
    cout<<"Anda Membagikan Sebanyak "<<jumlah<<endl;
    cout<<"Maka Sisa Buah Anda Sekarang Adalah "<<sisa<<endl;
}else if (jumlah > jumlah2){
    cout<<"Mohon Maaf Buah Kurang"<<endl;
}
}