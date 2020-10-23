// This is a project for makaing a Wii Balance Board with Arduino.
// I used 4 weight sensor for measurement and HC-06 Bluetooth module for communication.
// You can upload this to your Arduino for using it.

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


//Added data struct as it says in WiiBrew Wii Balance Board Page
struct data {
    uint16_t topRight;
    uint16_t bottomRight;
    uint16_t topLeft;
    uint16_t bottomLeft;
    uint8_t temperature;
    uint8_t batteryLevel;
};


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




void setup(){

}


void loop(){

} 
