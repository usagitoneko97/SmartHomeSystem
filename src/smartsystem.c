#include <math.h>
#include "stdlib.h"
#include "smartsystem.h"
#include "get_coordinate.h"

GpsCoordinate house = {
  200,
  5345,
}; //570
GpsCoordinate garageDoor = {
  220,
  5300,
};//5304.56
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
  if(isArea(gps, house, 2000) == TRUE){
    turn(AIRCOND, ON);
    turn(WATER_HEATER, ON);
  }

  /*if(abs(getActualRadius(gps)-getActualRadius(house))<=2000){
     turn(AIRCOND, ON);
     turn(WATER_HEATER, ON);
  }
  if((abs(getActualRadius(gps)-getActualRadius(garageDoor))<=5)&&(abs(getActualRadius(gps)-getActualRadius(garageDoor))>1)){
     turn(GARAGE_DOOR, ON);
  }
  if(abs(getActualRadius(gps)-getActualRadius(garageDoor))<=1){
     turn(GARAGE_DOOR, OFF);
  }
  if(abs(getActualRadius(gps)-getActualRadius(kitchen))<=50){
     turn(KITCHEN_LIGHT, ON);
  }*/

}
