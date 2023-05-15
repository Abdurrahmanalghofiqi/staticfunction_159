#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setjudul(string judul)
	{
		this->judul;
		return *this; //chain fuction
}
	string getJudul()
	{
		return this->judul;
	}
}; bukunya;

int main()
{
	//bukunya.setJudul("Matematika").getJudul();
	// cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul(); //chain function calls
	return 0;
}