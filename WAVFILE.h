

#ifndef OP_LR4_WAVFILE_H
#define OP_LR4_WAVFILE_H

#include <cstdint>
#include "HEADER.h"

class WAVFILE {
public:
    HEADER header;
      short int *myData;// семпли
    void setData();
};


#endif //OP_LR4_WAVFILE_H
