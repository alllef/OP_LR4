
#include "UserInterface.h"
#include <iostream>
#include "WavParser.h"
#include "WAVFILE.h"
using namespace std;

void UserInterface::makeMenu(){
    char *inputFile=new char[100];
    char *outputFile=new char[100];
    int size;
    WavParser parser{};
    WAVFILE myFile{};
cout<< "Введіть WAV-файл для зчитування ";
cin>>inputFile;
cout<< "Введіть WAV-файл для запису ";
cin>>outputFile;
cout<< "Введіть в скільки разів ви хочете розтягнути файл ";
cin>>size;
parser.readWav(myFile,inputFile);
myFile.changeDuration(size);
parser.writeWav(myFile,outputFile);
cout<< "Результат записаний в "<<outputFile<<endl;
}