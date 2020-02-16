#include <iostream>
#include <string>

using namespace std;


__interface Notebook
{

public:
	void Charge();
};


class OldCharge
{

public:
	void ChargeOld()
	{
		cout << "Get 12V (USA standart)" << endl;
	}
};


class Adapter : public Notebook, protected OldCharge
{

	//OldCharge notebook;

public:
	void Charge()
	{
		//notebook.ChargeOld();
		OldCharge::ChargeOld();
	}
};



void main()
{
	Adapter ad;

	ad.Charge();

	system("pause");

}
