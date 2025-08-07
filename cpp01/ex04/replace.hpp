#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>

bool is_valid(int ac, char** av);
bool is_fstreams_ready(const std::string file_name, std::fstream* in, std::fstream* out);
bool replace(std::fstream* fin, std::fstream* out, const std::string s1, const std::string s2);

#endif