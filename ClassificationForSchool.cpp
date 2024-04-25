#include <iostream>
#include <string>
using namespace std;

class person{
    protected:
        string isim;
        int yas;
        string okul;
    public : 
        enum Transmission {erkek,kiz};
        Transmission cinsiyet;
        
        person(string i = "",int y = 0,string o = "", Transmission c = erkek) : isim(i), yas(y),okul(o), cinsiyet(c){}

        void isimata(string i){
            isim = i;
        }
        string isimb(){
            return isim;
        }
        void yasata(int y){
            yas = y;
        }
        int yasb(){
            return yas;
        }
        void cinsata(Transmission c){
            cinsiyet = c;
        }
        string cinsyazdir(){
            if (cinsiyet==0){
                return "erkek";
            }
            else{
                return "kiz";
            }
        }
        void okulata(string o){
            okul = o;
        }
        string okulyaz(){
            return okul;
        }

};

class student : public person{
    private:
        string okulno;
        string sinifi;
    public:
        student(string ok = "", string s = "") : okulno(ok), sinifi(s){}

        void okulnoata(string ok){
            okulno = ok;
        }
        string okulnoyaz(){
            return okulno;
        }
        void sinifiata(string s){
            sinifi = s;
        }
        string sinifyaz(){
            return sinifi;
        }

};

class teacher : public person{
    private:
        string brans;
    public:
        teacher(string b = "") : brans(b){}
        
        void bransata(string b){
            brans = b;
        } 
        string bransyaz(){
            return brans;
        }
};

int main(){
    student ogrenci;
    teacher ogretmen;
    ogrenci.isimata("Meryem Bulbul");
    ogrenci.yasata(19);
    ogrenci.cinsata(person::kiz);
    ogrenci.okulata("Firat Universitesi");
    ogrenci.okulnoata("230291002");
    ogrenci.sinifiata("Yapay Zeka 1. Sinif");
    cout << ogrenci.isimb() << "\n" << ogrenci.yasb() << "\n" << ogrenci.cinsyazdir() << "\n" << ogrenci.okulyaz() << "\n" << ogrenci.okulnoyaz() << "\n" << ogrenci.sinifyaz() << "\n";
    return 0;
}