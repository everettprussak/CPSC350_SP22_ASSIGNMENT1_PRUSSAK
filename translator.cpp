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
      string sing = ab.translateSingleCharacter(i);
      int sing_value = sing.length();
      ret.erase(counter-sing_value,sing_value);
      string doub = ab.translateDoubleCharacter(i);
      ret = ret + doub;
      counter = counter - sing_value;
      counter = counter + doub.length();
    }
    else{
      string word = ab.translateSingleCharacter(i);
      ret = ret + word;
      counter = counter + word.length();
    }
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
  string word;
  int count = 0;
  for(char space: b){
    if(space==' '){
      ret = ret + translateEnglishWord(word) + " ";
      count = count + 1;
      word = "";
      continue;
    }
    word = word + space;
    count = count + 1;
    if(count==b.length()){
      ret = ret + translateEnglishWord(word);
    }
  }
  return ret;
}
