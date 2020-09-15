
#include <fstream>
#include "ward.h"
using namespace std;

Ward::Ward()
{
    used = 0;
}

void Ward::load(std::istream& ins)
{
	string line;
    Household tmp;
    while(!ins.eof()){
        tmp.input(ins);
        Houses[used] = tmp;
        used++;
    }

}

void Ward::add(Household& NewHousehold)
{
	if(used < CAPACITY)
    {
		Houses[used] = NewHousehold;
		used++;
	}
	else{
		cout<<"Error. List capacity has been reached.\n";
	}
}

void Ward::display(std::ostream& outs)
{
	for(int i = 0; i < used; ++i)
	{
		outs << Houses[i].get_head() << endl;
        outs << Houses[i].get_address() << endl;
		outs << Houses[i].get_income() << endl;
		outs << Houses[i].get_occupants() << endl << endl;

	}
}

void Ward::remove(const std::string& name)
{
    return;
}

Household find(const std::string& name)
{
    Household h1;
    return h1;
}

void Ward::display_richest()  //has to go through array houses and display to terminal the richest household/individual
{
    return;
}

void Ward::display_avg_income()
{
    return;
}
void Ward::display_avg_people()
{
    return;
}
void Ward::sort_by_income()
{
    return;
}

void Ward::sort_by_name()
{ 
    return;
}

void Ward::save(std::ostream& outs)
{
    return;
}