#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "WAVFILE.h"

void WAVFILE::setData() {
    myData=new short int[header.subchunk2Size/2];
}


