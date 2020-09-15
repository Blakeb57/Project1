
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

std::string  Household::get_head() const { 
    return house_head;
}

std::string Household::get_address() const {
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

std::istream& Household::operator >> (std::istream& ins, Household& h)
{

}

std::ostream& Household::operator << (std::ostream& outs, const Household& h)
{
    
}
