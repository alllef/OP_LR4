#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "WAVFILE.h"
#include <iostream>

using namespace std;

void WAVFILE::setData() {
    myData = new short int[header.subchunk2Size / 2];
}

void WAVFILE::changeDuration(int size) {

    header.chunkSize = (header.chunkSize - 36) * size + 36;
    short int *tmpData = new short int[(header.subchunk2Size/2) * size];

    int f = 0;

    for (int i = 0; i < header.subchunk2Size / 2; i++) {
        for (int d = 0; d < size; d++) {
            tmpData[f] = myData[i];
            f++;
        }
    }

    myData=tmpData;
    header.subchunk2Size = header.subchunk2Size * size;



}





