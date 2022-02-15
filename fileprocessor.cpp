#include "fileprocessor.h"
#include "translator.h"
#include <iostream>
#include <fstream>
using namespace std;

//Nothing is being stored here, so left blank


fileprocessor::fileprocessor(){
  //nothing
}

//Nothing is being destructed here, so left blank


fileprocessor::~fileprocessor(){
  //nothing
}

/*
processFile is a method in the fileprocessor class.
It receives a name of the input file as string, and the name of output file as a string
It is type void because we are not returning anything.
It opens a file with ifstream, writes the contents down in a string stored here.
Then the output file is created or opened, and the string is passed into it.
It gets written in the new file, then closes.
*/

void fileprocessor::processFile(string input_file, string output_file){
  ifstream in_file;
  translator finisher;
  string line;
  string line1;
  in_file.open(input_file);
  int y = 0;
  while(getline(in_file,line)){
    line1 = line1 + finisher.translateEnglishSentence(line) + "\n";
    y++;
  }
  in_file.close();

  ofstream out_file;
  out_file.open(output_file);
  out_file << line1 << endl;
  out_file.close();
}
