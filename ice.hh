#ifndef __Ice__H
#define __Ice__H
#include "desert.hh"



class Ice : public Desert{
public:
	Ice(){};
	~Ice(){};


	std::string haveType()const{return "Di";};

};


#endif