#ifndef __Mountain__H
#define __Mountain__H
#include "land.hh"


class Mountain: public Land{
public:
	Mountain(){};
	~Mountain(){};

	std::string haveType()const{return "M";};

};


#endif