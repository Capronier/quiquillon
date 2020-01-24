#ifndef __forest__H
#define __forest__H
#include "mapi.hh"


class forest : public Mapi{
public:
	forest(){};
	~forest(){};

	std::string haveType()const{return "F";};

};


#endif