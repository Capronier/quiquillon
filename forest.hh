#ifndef __forest__H
#define __forest__H
#include "land.hh"


class forest : public Land{
public:
	forest(){};
	~forest(){};

	std::string haveType()const{return "F";};

};


#endif