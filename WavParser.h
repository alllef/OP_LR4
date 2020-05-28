//
// Created by alekz29 on 27.05.2020.
//

#ifndef OP_LR4_WAVPARSER_H
#define OP_LR4_WAVPARSER_H


#include "WAVFILE.h"

class WavParser {
public:
    void readHEADER(WAVFILE myFile);
    void writeHEADER(WAVFILE myFile);

};


#endif //OP_LR4_WAVPARSER_H
