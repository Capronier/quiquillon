#include <iostream>
//#include "SDL.h"
#include <stdio.h>
#include "mapi.hh"

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


int main()
{
	srand(time(NULL));
	std::cout<<"programme en cours de création"<<std::endl;
	
	Mapi m;
	

	m+=new Plain;
	m+=new Sand;
	
	std::cout<<m<<std::endl;
	


	return 0;
}