#include <iostream>
#include <fstream>

#include "replace.hpp"

int main(int ac, char** av) {
  if (!is_valid(ac, av)) {
    return 1;
  }

  std::string file_name = av[1];
  std::fstream fin;
  std::fstream fout;
  if (!is_fstreams_ready(file_name, &fin, &fout)) {
    return 1;
  }

  std::string s1 = av[2];
  std::string s2 = av[3];
  if (!replace(&fin, &fout, s1, s2)) {
    return 1;
  }

  return 0;
}