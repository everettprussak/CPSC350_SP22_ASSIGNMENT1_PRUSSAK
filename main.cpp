//Everett Prussak
//2368093
//2/11/2022
//CPSC 350 - 01
/*
The combination of main.cpp, model.h, model.cpp, translator.cpp, translator.h,
fileprocessor.h, and fileprocessor.cpp accepts a english worded file, and
creates a file translated into Tutnese.
*/
//Late Day Being Used

#include "model.h"
#include "translator.h"
#include "fileprocessor.h"
#include <iostream>



using namespace std;

//Main method:
//Creating an instance of the class fileprocessor.
//It then calls the method processFile from the fileprocessor class.
//The English File named "english.txt" is the input file
//The Tutnese File named "tutnese.txt" is the output file
//This method will automatically make a file in the current directory.

int main(int argc, char **argv){

  fileprocessor f1;
  f1.processFile(argv[1],argv[2]);

  return 0;
}
