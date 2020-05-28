
#include "WavParser.h"
#include "WAVFILE.h"
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
using namespace std;
void WavParser::readHEADER(WAVFILE myFile) {
    FILE *input;
    errno_t err;
    err = fopen_s(&input, "input.wav", "rb");
    fread_s(&myFile.header, sizeof(myFile.header), sizeof(myFile.header), 1, input);
    myFile.setData();

    for(int i=0; i<myFile.header.subchunk2Size/2;i++){
        fread(&myFile.myData[i],  myFile.header.blockAlign,1, input);
    }

    for(int i=0; i<myFile.header.subchunk2Size/2;i++){
        cout<<myFile.myData[i]<<endl;
    }

    fclose(input);
}

void WavParser::writeHEADER(WAVFILE myFile) {
ofstream  create;
create.open("output.wav", ios::binary);
create.close();
    FILE *output;
    errno_t err;
    err = fopen_s(&output, "output.wav", "w");
    fwrite(&myFile.header, sizeof(myFile.header), 1, output);
    for(int i=0; i<myFile.header.subchunk2Size/2;i++){
        fwrite(&myFile.myData[i],  myFile.header.blockAlign,1, output);
    }

    fclose(output);

}