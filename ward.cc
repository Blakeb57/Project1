
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
       outs << Houses[i] << endl;
	}
}

void Ward::remove(const std::string& name)
{
    int index = -1;
	for(int i = 0; i < used; ++i)
    {
        if(name == Houses[i].get_head())
        {
		    index = i;
	    }
    }
        
    if (index != -1)
    {
        used--;
        Houses[index] = Houses[used];

    }else{
        cout << name <<" was not found in the list of houses. " << endl;
    }
        
    
}

Household Ward::find(const std::string& name)
{
    Household tmp;
	for(int i = 0; i < used; ++i)
    {
        if(name == Houses[i].get_head())
        {
            cout << Houses[i];
		    return Houses[i];
	    }
    } 
    cout << "-Household not found. " << endl;
    return tmp;
}

void Ward::display_richest()  //has to go through array houses and display to terminal the richest household/individual
{
    int maxIncome = 0;
    int index = 0;
    for(int i = 0; i < used; ++i)
    {
        if(Houses[i].get_income() > maxIncome)
        {
            maxIncome = Houses[i].get_income();
            index = i;
        }
    }
    Houses[index].output(std::cout);
}

void Ward::display_avg_income()
{
    int average = 0;

    for(int i = 0; i < used; ++i)
    {
        average += Houses[i].get_income();   
    }

    cout << "-This is the average income of all the households: $" << average/used << endl;
}

void Ward::display_avg_people()
{
    int average = 0;

    for(int i = 0; i < used; ++i)
    {
        average += Houses[i].get_occupants();   
    }

    cout << "-This is the average number of residents of all the households: " << average/used << endl;
}

void Ward::sort_by_income()
{
    bool done = false;
    int j;
    Household tmp;
    while(!done)
	{
		done = true;

		for(j = used -1; j > 0; --j)
		{
	    	if(Houses[j].get_income() > Houses[j-1].get_income())
			{
				done = false;
				tmp = Houses[j];
				Houses[j] = Houses[j-1];
				Houses[j-1] = tmp;
	   		}
		}
    }
}

void Ward::sort_by_name()
{ 
    bool done = false;
    int j;
    Household tmp;
    while(!done)
	{
		done = true;

		for(j = used -1; j > 0; --j)
		{
	    	if(Houses[j].get_head() < Houses[j-1].get_head())
			{
				done = false;
				tmp = Houses[j];
				Houses[j] = Houses[j-1];
				Houses[j-1] = tmp;
	   		}
		}
    }
}

void Ward::save(std::ostream& outs)
{
    return;
}