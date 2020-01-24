#ifndef __City__H
#define __City__H
#include "mapi.hh"


class City : public Mapi{
public:
	City(){};
	~City(){};

	std::string haveType()const{return "C";};

};


#endif