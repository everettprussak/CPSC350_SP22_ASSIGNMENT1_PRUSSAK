#include "translator.h"
#include "model.h"
#include <iostream>
using namespace std;

//Nothing needs to be stored in this instance for this class.
translator::translator(){
  //nothing
}

//Nothing needs to be destructed in this instance for this class.

translator::~translator(){
  //nothing
}

/*translateEnglishWord is a method in the translator class.
It takes a simple string as input, and then creates and instance of the model class.
Using the translateDoubleCharacter and translateSingleCharacter methods in the model class,
it will get the correct Tutnese translated word from the English word parameter.
*/

string translator::translateEnglishWord(string a){
  string ret;
  char temp;
  int counter = 0;
  model ab;
  for(char i: a){
    if(i==temp){
      ret.pop_back();
      ret = ret + ab.translateDoubleCharacter(i);
    }
    else{
      ret = ret + ab.translateSingleCharacter(i);
    }
    counter = counter + 1;
    temp = i;
  }
  return ret;
}

/*translateEnglishSentence is a method in the translator class.
Simple to the translateEnglishWord method, but instead takes longer input string.
Creates an instance of the class model, as uses its methods to translate the word
into Tutnese. It then returns the string.
*/

string translator::translateEnglishSentence(string b){
    string ret = "";
    model ac;
    char temp;
    int counter = 0;
    for(char w: b){
      if(w==temp){
        string len = ac.translateSingleCharacter(w);
        for(int y=0; y<len.length(); ++y){
          ret.pop_back();
        }
        ret = ret + ac.translateDoubleCharacter(w);
      }
      else{
        ret = ret + ac.translateSingleCharacter(w);
      }
      counter = counter + 1;
      temp = w;
    }
    return ret;
}
