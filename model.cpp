#include "model.h"
#include <iostream>
using namespace std;

//Nothing is being stored here, so left blank

model::model(){
  //nothing
}

//Nothing is being destructed here, so left blank

model::~model(){
  //nothing
}

/*
translateSingleCharacter takes a single char, and converts into Tutnese.
It uses a number of if statements and for loops to get the correct conversion
rather that be upper case, lower case, which letter, or an unknown symbol.
*/

string model::translateSingleCharacter(char a){
   bool case_a = isupper(a);
   char other = tolower(a);
   string ret;
   if(other=='b'){
     ret = "bub";
   }
   else if(other=='c'){
     ret = "cash";
   }
   else if(other=='d'){
     ret = "dud";
   }
   else if(other=='f'){
     ret = "fuf";
   }
   else if(other=='g'){
     ret = "gug";
   }
   else if(other=='h'){
     ret = "hash";
   }
   else if(other=='j'){
     ret = "jay";
   }
   else if(other=='k'){
     ret = "kuck";
   }
   else if(other=='l'){
     ret = "lul";
   }
   else if(other=='m'){
     ret = "mum";
   }
   else if(other=='n'){
     ret = "nun";
   }
   else if(other=='p'){
     ret = "pub";
   }
   else if(other=='q'){
     ret = "quack";
   }
   else if(other=='r'){
     ret = "rug";
   }
   else if(other=='s'){
     ret = "sus";
   }
   else if(other=='t'){
     ret = "tut";
   }
   else if(other=='v'){
     ret = "vuv";
   }
   else if(other=='w'){
     ret = "wack";
   }
   else if(other=='x'){
     ret = "ex";
   }
   else if(other=='y'){
     ret = "yub";
   }
   else if(other=='z'){
     ret = "zub";
   }

   else{
     string punct;
     punct = punct + a;
     return punct;
   }

   if(case_a==true){
     string upper_return;
     for(int i=0; i<ret.length(); ++i){
       if(i==0){
         char t = toupper(ret[0]);
         upper_return = upper_return + t;
         continue;
       }
       upper_return = upper_return + ret[i];
     }
     return upper_return;
   }
   return ret;
}

/*
translateDoubleCharacter is a method in the model class.
It takes a single char as input, and converts it into the correct
Tutnese translation. There are a number of if statements to correctly
identify the letter, symbol, or other.
It then returns the correct Tutnese translation in the form of a string
*/

string model::translateDoubleCharacter(char b){
    bool case_b = isupper(b);
    char other = tolower(b);
    string ret;

    if(other=='a'||other=='e'||other=='o'||other=='u'||other=='i'){
      if(case_b==true){
        ret = "Squat";
        ret = ret + other;
        return ret;
      }
      ret = "squat";
      ret = ret + other;
      return ret;
    }
    else{
      if(case_b==true){
        return "Squa";
      }
      else{
        return "squa";
      }
    }
    return ret;
}
