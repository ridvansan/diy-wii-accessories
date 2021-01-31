// This is a project for makaing a Wii Balance Board with Arduino.
// I used 4 weight sensor for measurement and HC-06 Bluetooth module for communication.
// You can upload this to your Arduino for using it.

#include <EEPROM.h>


#define UPPERLEFT 2
#define UPPERRIGHT 3
#define LOWERLEFT 4
#define LOWERRIGHT 5

int ulData;
int urData;
int llData;
int lrData;


// Might delete decimal and change to hexadecimal for easy imply
void updateWeightData(int *upleft,int *upRight, int *lowLeft, int *lowRight){
    *upleft = digitalRead(UPPERLEFT);
    *upRight = digitalRead(UPPERRIGHT);
    *lowLeft = digitalRead(LOWERLEFT);
    *lowRight = digitalRead(LOWERRIGHT);
}



int startOfAddressOfData = 0xa40000;
int endOfAddressOfData = 0xa4000a;

//Added data struct as it says in WiiBrew Wii Balance Board Page
struct data {
    uint16_t topRight;
    uint16_t bottomRight;
    uint16_t topLeft;
    uint16_t bottomLeft;
    uint8_t temperature;
    uint8_t batteryLevel;
};

struct data readData(){
    struct data datan = malloc(sizeof(struct data));
    updateWeightData(&datan.topLeft,&datan.topRight,&datan.bottomLeft,&datan.bottomRight);
    datan.temperature = 0x20;
    datan.temperature = 0x83;
}




int startOfAddressOfCalibration = 0xa40020;
int endOfAddressOfCalibration = 0xa4003f;

//Added calibration struct
struct calibration{
    uint16_t topRight0kg;
    uint16_t bottomRight0kg;
    uint16_t topLeft0kg;
    uint16_t bottomLeft0kg;
    uint16_t topRight17kg;
    uint16_t bottomRight17kg;
    uint16_t topLeft17kg;
    uint16_t bottomLeft17kg;
    uint16_t topRight34kg;
    uint16_t bottomRight34kg;
    uint16_t topLeft34kg;
    uint16_t bottomLeft34kg;
    uint32_t checksum;
};

int addressOfReferenceTemp = 0xa40060;

struct referenceTemp
{
    uint8_t referenceTemperature; //Temperature when device is calibrated
    uint8_t constant;   //Always 0x01
};

void calculateChecksum(){

    int addr1 = 0xEDB88320; //28 bytes from here
    int addr2 = 0x24; //24 bytes
    int addr3 = 0x3b; //24 bytes
    int addr4 = 0x20; //1 byte and x21
    int addr5 = 0x60; //1 byte and x61



}




void setup(){

}


void loop(){

} 
