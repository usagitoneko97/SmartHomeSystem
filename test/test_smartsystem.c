#include "unity.h"
#include "smartsystem.h"
#include "mock_get_coordinate.h"

GpsCoordinate coordinateLessThanHouse = {
  5682,
  4500,
};

GpsCoordinate coordinatelessThanGarage5 = {
  3982,
  3500,
};  //5301.53


void setUp(void)
{
}

void tearDown(void)
{
}

void test_smartsystem_house_expect_turnON_aircond_WaterHeater(void)
{
  getGpsCoordinate_ExpectAndReturn(coordinateLessThanHouse);
  //isArea_ExpectAndReturn(coordinateLessThanHouse, house, 2000, TRUE);
  turn_Expect(AIRCOND, ON);
  turn_Expect(WATER_HEATER, ON);
  doSmartThing();
}

/*void test_smartsystem_garageDoor_expect_turnON_garageDoor(void)
{
  getGpsCoordinate_ExpectAndReturn(coordinatelessThanGarage5);
  turn_Expect(GARAGE_DOOR, ON);
  doSmartThing();
}*/
//TODO bugs where second test fall in to first test func,
// should use mock to determine what device to operate
