#ifndef __Sea__H
#define __Sea__H
#include "land.hh"


class Sea : public Land{
public:
	Sea(){};
	~Sea(){};

	std::string haveType()const{return "S";};

};


#endif