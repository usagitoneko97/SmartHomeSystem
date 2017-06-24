#include <math.h>
#include "smartsystem.h"
#include "get_coordinate.h"

GpsCoordinate house = {
  200,
  5345,
}; //570
GpsCoordinate garageDoor = {
  220,
  5300,
};//5304
GpsCoordinate kitchen = {
  196,
  5400,
}; //5404

double getActualRadius(GpsCoordinate gpsC){
  return sqrt(pow(gpsC.x, 2) + pow(gpsC.y, 2));
}

void doSmartThing(){
  //assume user close everything before leave the house
  GpsCoordinate gps;
  gps = getGpsCoordinate(); //update coordinate of user
  if(getActualRadius(gps)-getActualRadius(house)<=2000){
     turn(AIRCOND, ON);
     turn(WATER_HEATER, ON);
  }
  else if((getActualRadius(gps)-getActualRadius(garageDoor)<=5)&&(getActualRadius(gps)-getActualRadius(garageDoor)>1)){
     turn(GARAGE_DOOR, ON);
  }
  else if(getActualRadius(gps)-getActualRadius(garageDoor)<=1){
     turn(GARAGE_DOOR, OFF);
  }
  else if(getActualRadius(gps)-getActualRadius(kitchen)<=50){
     turn(KITCHEN_LIGHT, ON);
  }
  else{
    //do nothing
  }

}
