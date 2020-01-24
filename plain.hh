#ifndef __Plain__H
#define __Plain__H
#include "land.hh"


class Plain : public Land{
public:
	Plain(){};
	~Plain(){};

	std::string haveType()const{return "P";};

};


#endif