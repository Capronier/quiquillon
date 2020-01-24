#ifndef __Beach__H
#define __Beach__H
#include "mapi.hh"


class Beach : public Mapi{
public:
	Beach(){};
	~Beach(){};

	std::string haveType()const{return "B";};

};


#endif