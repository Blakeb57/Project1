
#include <iostream>
#include <string>
#include <fstream>
#include "household.h"
#ifndef WARD_H
#define WARD_H
  
class Ward
{
        public:

                static const size_t CAPACITY = 200;

	        Ward();

                void load(std::istream& ins);
                void add(Household& NewHousehold);
                void display(std::ostream& outs);
                void remove(const std::string& name);
                Household find(const std::string& name);
                void display_richest();
                void display_avg_income();
                void display_avg_people();
                void sort_by_income();
                void sort_by_name();
                void save(std::ostream& outs);


		
	private:

                Household Houses[CAPACITY];
	        size_t used;


};



#endif
