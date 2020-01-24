#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int x(101);
  int y(101);
  int map[x][y];
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      map[i][j] = i+j;
    }
  }
  std::ofstream ofs("map.txt");
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      ofs << map[i][j] << std::endl;
    }
  }
  ofs << "test";
  return 0;
}

