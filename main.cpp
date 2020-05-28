#include <iostream>
#include<cstdint>
#include <fstream>
#include "WAVFILE.h"
#include "WavParser.h"
using namespace std;



int main() {
WAVFILE myFile{};
WavParser parser;
parser.readHEADER(myFile);
parser.writeHEADER(myFile);

    return 0;
}
