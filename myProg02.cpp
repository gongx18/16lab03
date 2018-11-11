
#include <cstdlib>  // for exit(), perror()
#include <fstream>  // for ifstream
#include <iostream> // for printf()
 #include <cstdlib>  // for exit(), perror()
 #include <fstream>  // for ifstream
 #include <iostream> // for printf()
 #include <string>


 using namespace std;

 int main(int argc, char *argv[])
 {
   if (argc!=2) {
     // if argc is not 2, print an error message and exit
     cerr << "Usage: "<< argv[0] << " inputFile" << endl;
     exit(1); // defined in cstdlib
   }
   ifstream in(argv[1]); 


   string str; 

   int ani_ct = 0; 
   int ct = 0; 
   while(in >> str){
   		if(str == "duck")
   			ct++;
   		ani_ct++; 
   }
   cout<<"Report for "<<argv[1]<<":"<<endl;
   cout<<"Animal count:"<<ani_ct<<endl; 
   cout<<"Duck count:"<<ct<<endl;
   cout<<"Non duck count:"<<ani_ct - ct<<endl;  

 }
