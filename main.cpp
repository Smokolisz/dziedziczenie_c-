#include <iostream>

using namespace std;


class Osoba {
    string imie, nazwisko;

public:
    void wprowadz();
    void wypisz();
};

void Osoba::wprowadz() {
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
}

void Osoba::wypisz() {
    cout << "\n" << imie << " "<< nazwisko << "\n";
}


class Uczen : public Osoba {
    string klasa;
    int numer_dziennika;

public:
    void wprowadz_ucznia() {
        wprowadz();
        cout << "Podaj klase: ";
        cin >> klasa;
        cout << "Podaj numer dziennika: ";
        cin >> numer_dziennika;
    }

    void wypisz_ucznia() {
        wypisz();
        cout << "Klasa " << klasa << ", numer w dzienniku: " << numer_dziennika << "\n";
    }
};


class Nauczyciel : public Osoba {
    string przedmiot, //np j.polski
           wychowawca; //np klasa 2A

    int wiek;

public:
    void wprowadz_nauczyciela() {
        wprowadz();
        cout << "Podaj uczony przedmiot: ";
        cin >> przedmiot;
        cout << "Podaj klase ktora wychowuje ";
        cin >> wychowawca;
        cout << "Podaj wiek ";
        cin >> wiek;
    }

    void wypisz_nauczyciela() {
        wypisz();
        cout << "Uczy przedmiotu " << przedmiot << " , wychowuje klase " << wychowawca << ", ma lat " << wiek;
    }
};







int main()
{
    Uczen u1;
    Nauczyciel n1;

    cout << "\nDodaj ucznia\n";
    u1.wprowadz_ucznia();
    u1.wypisz_ucznia();

    cout << "\nDodaj nauczyciela\n";
    n1.wprowadz_nauczyciela();
    n1.wypisz_nauczyciela();

    return 0;
}
