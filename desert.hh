#ifndef __Desert__H
#define __Desert__H
#include "land.hh"


class Desert : public Land{
public:
	Desert(){};
	~Desert(){};

	virtual std::string haveType()const=0;

};


#endif