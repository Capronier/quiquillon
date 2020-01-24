#ifndef __City__H
#define __City__H
#include "land.hh"


class City : public Land{
public:
	City(){};
	~City(){};

	std::string haveType()const{return "C";};

};


#endif