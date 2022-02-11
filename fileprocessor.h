#include <iostream>
using namespace std;

/*
Simple header class for the fileprocessor class.
*/

class fileprocessor{
public:
  fileprocessor();
  ~fileprocessor();
  void processFile(string input_file, string output_file);
};
