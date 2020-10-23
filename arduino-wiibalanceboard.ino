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


void updateWeightData(int *upleft,int *upRight, int *lowLeft, int *lowRight){
    *upleft = digitalRead(UPPERLEFT);
    *upRight = digitalRead(UPPERRIGHT);
    *lowLeft = digitalRead(LOWERLEFT);
    *lowRight = digitalRead(LOWERRIGHT);
}





void setup(){

}


void loop(){

} 
