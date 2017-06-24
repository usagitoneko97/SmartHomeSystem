#ifndef _GET_COORDINATE_H
#define _GET_COORDINATE_H

#define TRUE 1
#define FALSE 0


typedef struct GpsCoordinate GpsCoordinate;
struct GpsCoordinate {
  float x;
  float y;
};

typedef enum {
  GARAGE_DOOR,
  KITCHEN_LIGHT,
  AIRCOND,
  WATER_HEATER,
} Device;

typedef enum {
  OFF,
  ON
} State;




void turn(Device device, State state);
GpsCoordinate getGpsCoordinate();
int isArea(GpsCoordinate current, GpsCoordinate loc, int minRadiusToTrig);



#endif // _GET_COORDINATE_H
