#ifndef __Beach__H
#define __Beach__H
#include "land.hh"


class Beach : public Land{
public:
	Beach(){};
	~Beach(){};

	std::string haveType()const{return "B";};

};


#endif