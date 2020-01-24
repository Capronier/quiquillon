#ifndef __MAPI__H
#define __MAPI__H
#include <iostream>
#include <string>
#include <vector>
#include "land.hh"

#include "beach.hh"
#include "city.hh"
#include "desert.hh"
#include "ice.hh"
#include "sand.hh"
#include "forest.hh"
#include "mountain.hh"
#include "plain.hh"
#include "sea.hh"


class Mapi {
public:
	Mapi(){};
	~Mapi(){};

	size_t getSize(){return my_map.size();};
	void operator+= (Land *new_land){my_map.push_back(new_land);};
	friend std::ostream& operator<<(std::ostream& flux,Mapi const &m);

private:
	std::vector<Land*> my_map;
	
};


#endif