#ifndef _SMARTSYSTEM_H
#define _SMARTSYSTEM_H

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
double getActualRadius(GpsCoordinate* gpsC);

void doSmartThing();

#endif // _SMARTSYSTEM_H
