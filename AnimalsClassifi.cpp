#include <iostream>
#include <string>
using namespace std;

class Hayvanlar{
    public:
    int yas;
    string cinsiyet;
    int agirlik;

    private:
    bool Yenilebilir(){
        cout<<"yenilebilir mi ";
        return true;
    } 
    bool Etcil(){
        cout<<"etcil";
        return true;
    }
};

class Balik : public Hayvanlar{
    public:
    string cins;
    private:
    void Yuzme(){
    } 
};

class Kaplan : public Hayvanlar{
    public:
    bool vahsi;
    private:
    void Avlanma(){
    } 
};
  
class Kurbaga : public Hayvanlar{
    public:
    string renk;
    private:
    void Ziplama(){
    } 
    
};

class Habitat{
    public:
    Hayvanlar *ptrhayvan;
    Habitat(Hayvanlar *ptr) : ptrhayvan(ptr){}



};


int main(){

    Hayvanlar hayvan;
    Habitat habitat(&hayvan);    
    habitat.ptrhayvan->yas=19;
    cout<<habitat.ptrhayvan->yas;

  

    return 0;
}