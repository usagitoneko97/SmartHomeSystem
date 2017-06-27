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

GpsCoordinate coordinatelessThanKitchen = {
  4824.765,
  2500,
};  //5434



void setUp(void)
{
}

void tearDown(void)
{
}

void test_smartsystem_house_expect_turnON_aircond_WaterHeater(void)
{
  getGpsCoordinate_ExpectAndReturn(coordinateLessThanHouse);
  turn_Expect(AIRCOND, ON);
  turn_Expect(WATER_HEATER, ON);
  doSmartThing();
}

void test_smartsystem_garageDoor_expect_turnON_garageDoor(void)
{
  getGpsCoordinate_ExpectAndReturn(coordinatelessThanGarage5);
  turn_Expect(AIRCOND, ON);
  turn_Expect(WATER_HEATER, ON);
  turn_Expect(GARAGE_DOOR, ON);
  doSmartThing();
}

void test_smartsystem_kitchen_expect_turnON_KitchenLight(void)
{
  getGpsCoordinate_ExpectAndReturn(coordinatelessThanKitchen);
  turn_Expect(AIRCOND, ON);
  turn_Expect(WATER_HEATER, ON);
  turn_Expect(KITCHEN_LIGHT, ON);
  doSmartThing();
}
//TODO bugs where second test fall in to first test func,
// should use mock to determine what device to operate
