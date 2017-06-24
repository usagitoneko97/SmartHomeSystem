#include "unity.h"
#include "smartsystem.h"
#include "mock_get_coordinate.h"

GpsCoordinate coordinateLessThanHouse = {
  5682,
  4500,
};

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
