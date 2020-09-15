
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
    getline(ins, line);
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
    
}

Household find(const std::string& name)
{

}

void Ward::display_richest()  //has to go through array houses and display to terminal the richest household/individual
{
    if()
    for(size_t i = 0; i < used; ++i)
    {
		cout << Houses[i] << endl;
    }
}

void Ward::display_avg_income()
{
	if(used == 0){

	    cout<<"Empty list.\n";

    }else{

	    for(size_t i = 0; i<used; ++i){
		    cout<<data[i]<<endl;
        }
    }
}
void Ward::display_avg_people()
{
	if(used == 0){

	    cout<<"Empty list.\n";

    }else{

	    for(size_t i = 0; i<used; ++i){
		    cout<<data[i]<<endl;
        }
    }
}
void Ward::sort_by_income()
{
    bool done = false;
    int j;
    int tmp;
    while(!done)
	{
		done = true;

		for(j = used -1; j > 0; --j)
		{
	    	if(data[j] < data[j-1])
			{
				done = false;
				tmp = data[j];
				data[j] = data[j-1];
				data[j-1] = tmp;
	   		}
		}
    }
}

void Ward::sort_by_name()
{ 
    bool done = false;
    int j;
    int tmp;
    while(!done)
	{
		done = true;

		for(j = used -1; j > 0; --j)
		{
	    	if(data[j] < data[j-1])
			{
				done = false;
				tmp = data[j];
				data[j] = data[j-1];
				data[j-1] = tmp;
	   		}
		}  
    }
}

void Ward::save(std::ostream& outs)
{

}