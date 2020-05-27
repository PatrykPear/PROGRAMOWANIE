#include <iostream>
#include <queue>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class kolejka
{
	
	public:
		
	queue < int > kolejka1;
	
		void wczytaj();
		void zapisz();
};



void kolejka::wczytaj()
{

	fstream plik;
    plik.open("a.txt");
    if (! plik) cout<<"Brak podanego pliku, sprobuj ponownie\n";
    int liczba;
    cout<<"Podaj liczbe: \n";
    cin>>liczba;
    plik<<liczba;
	kolejka1.push(liczba);
	cout<<"Pierwsza liczba w kolejce to: "<<kolejka1.front()<<"\n";
	kolejka1.pop();
	kolejka1.push(13379);
	cout<<"Druga liczba w kolejce to: "<<kolejka1.front()<<"\n";
	kolejka1.pop();
	kolejka1.push(216);
	cout<<"Ostatnia liczba w kolejce to: "<<kolejka1.back()<<"\n";

	
	plik.close();	
}

void kolejka::zapisz()
{
	
	ifstream plik2;
	plik2.open("b.txt");
	if(plik2.good())
	while(!plik2.eof())
	{
		plik2>>kolejka1.front();
		plik2>>kolejka1.back();
		cout<<endl;
	}
	plik2.close();
}


int main(int argc, char** argv) {
	
	kolejka PG;
	PG.wczytaj();
	PG.zapisz();
	
	return 0;
}

