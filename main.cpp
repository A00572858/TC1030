#include <iostream>

using namespace std;

class User{
    private:
        string name;
        string password;
        bool age;
    public:
        User(string nam, string pass, bool ag);
        void Logout();
        void Login(); //Check in main
};

User::User(string nam, string pass, bool ag){
    name = nam;
    password = pass;
    age = ag;
}

void User::Login(){
    cin >> name;
    cin >> password;
}

//void USer::Logout(){
//    exit();
//}

class Beer{
    protected:
        string bname;
        string brewery;
    public:
        Beer(string b_name, string brewery_);
        void whishlist();
        void mybeers(int rate);
};

Beer::Beer(string b_name, string brewery_){
bname = b_name;
brewery = brewery_;
}

//TERMINAR CLASE BEER -----------------

class Top : public Beer {
    private:
        string bstyle;
        int bitterness;
        float abv;
    public:
        void whishlist(Top);
        void imprimir();
        void mybeers(int rate);
        Top(string bname, string brewery, string bs, int bitt, float abvv):Beer(bname, brewery){
        bstyle = bs;
        bitterness = bitt;
        abv = abvv;
        }
};

void Top::imprimir(){
cout << "Beer name: " << bname << endl;
cout << "Beer brewery: " << brewery << endl;
cout << "Beer style: " << bstyle << endl;
cout << "Beer IBUs: " << bitterness << endl;
cout << "Beer Alcohol percentage: " << abv << "\n" << endl;
}

class Bottom : public Beer {
    private:
        string bstyle;
        string bitterness;
        float abv;
    public:
        void imprimir();
        void wishliat(Bottom);
        void mybeers(int rate);
        Bottom(string bname, string brewery, string bs, int bitt, float abvv):Beer(bname, brewery){
        bstyle = bs;
        bitterness = bitt;
        abvv = abv;
        }
};

void Bottom::imprimir(){
cout << "Beer name: " << bname << endl;
cout << "Beer brewery: " << brewery << endl;
cout << "Beer style: " << bstyle << endl;
cout << "Beer IBUs: " << bitterness << endl;
cout << "Beer Alcohol percentage: " << abv << "\n" << endl;
}

class Spontaneous : public Beer {
    private:
        string bstyle;
        string bitterness;
        float abv;
    public:
        void imprimir();
        void whishlist(Spontaneous);
        void mybeers(int rate);
        Spontaneous(string bname, string brewery, string bs, int bitt, float abvv):Beer(bname, brewery){
        bstyle = bs;
        bitterness = bitt;
        abvv = abv;
        }
};

void Spontaneous::imprimir(){
cout << "Beer name: " << bname << endl;
cout << "Beer brewery: " << brewery << endl;
cout << "Beer style: " << bstyle << endl;
cout << "Beer IBUs: " << bitterness << endl;
cout << "Beer Alcohol percentage: " << abv << "\n" << endl;
}

class Wishlist{
private:
    int Quantity;
    string Beers[100];
public:
    void Drankit(Beer);
    Wishlist(int Quantity, string Beers);
};

class MyBeers{
private:
    int QBeers;
    string MBeers[100];
public:
    MyBeers(int QBeers, string MBeers);
};

int main()
{
    Top Minerva_stout("Minerva Stout", "Minerva", "Stout", 45, 5.5);
    Minerva_stout.imprimir();
    Top Negra_modelo("Negra Modelo", "Modelo", "Ambar", 20, 5);
    Negra_modelo.imprimir();
    Top Duvel("Duvel", "Duvel", "Tripel", 30, 12);
    Duvel.imprimir();
}
