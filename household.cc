
#include <fstream>
#include "household.h"
using namespace std;

Household::Household()
{

}

void Household::set_head(const std::string& hd)
{
    this->house_head = hd;
}

void Household::set_address(const std::string& add)
{
    this->address = add;
}

void Household::set_occupants(int num)
{
    this->occupants = num;
}

void Household::set_income(int inc)
{
    this->income = inc;
}

std::string  Household::get_head() const
{ 
    return house_head;
}

std::string Household::get_address() const
{
    return address; 
}

int Household::get_occupants()const
{
    return occupants;
}

int Household::get_income()const
{
    return income;
}

void Household::input(istream& ins)
{
    string line;

    getline(ins, line);
        set_head(line);
	getline(ins, line);
        set_address(line);
    getline(ins, line);
        set_occupants(std::stoi(line));
    getline(ins, line);
        set_income(std::stoi(line));
}

void Household::output(ostream& outs)const
{
    outs << get_head() << endl;
    outs << get_address() << endl;
    outs << get_occupants() << endl;
    outs << get_income() << endl;
}

std::istream& operator >> (std::istream& ins, Household& h)
{
    string line;

    cout << "-Please enter new household name. ";
    getline(ins, line);
        h.set_head(line);
    cout << "-Please enter the new household's address. ";
	getline(ins, line);
        h.set_address(line);
    cout << "-Please enter the number of occupants of the new household. ";
    getline(ins, line);
        h.set_occupants(std::stoi(line));
    cout << "-Please enter the total income amount of the new household. ";
    getline(ins, line);
        h.set_income(std::stoi(line));

    return ins;
}

std::ostream& operator << (std::ostream& outs, const Household& h)
{
	outs << h.get_head() << endl;
	outs << h.get_address() << endl;
	outs << h.get_occupants() << endl;
	outs << h.get_income() << endl;

	return outs;
}