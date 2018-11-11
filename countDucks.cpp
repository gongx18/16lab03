#include <cstdlib>  // for exit(), perror()
#include <fstream>  // for ifstream
#include <iostream> // for printf()
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: " << argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

  ifstream in(argv[1]);

 // if (!in) {
 //   cerr << "error opening file" << endl;
 //   exit(1);
 // }

  string str;
  int count = 0;
  while (in >> str) {
    // in >> str : can be a boolean to check wheather there's input.
    if (str == "duck")
      count++;
  }

  cout << "There were " << count << " ducks in " << argv[1] << endl;
}
