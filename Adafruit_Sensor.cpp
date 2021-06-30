#include "Adafruit_Sensor.h"

/**************************************************************************/
/*!
    @brief  Prints sensor information to serial console
*/
/**************************************************************************/
void Adafruit_Sensor::printSensorDetails(void) {
  sensor_t sensor;
  getSensor(&sensor);
  cout << "------------------------------------" << endl;
  cout << "Sensor:       ";
  cout << sensor.name << endl;
  cout << "Type:         ";
  switch ((sensors_type_t)sensor.type) {
  case SENSOR_TYPE_ACCELEROMETER:
    cout << "Acceleration (m/s2)";
    break;
  case SENSOR_TYPE_MAGNETIC_FIELD:
    cout << "Magnetic (uT)";
    break;
  case SENSOR_TYPE_ORIENTATION:
    cout << "Orientation (degrees)";
    break;
  case SENSOR_TYPE_GYROSCOPE:
    cout << "Gyroscopic (rad/s)";
    break;
  case SENSOR_TYPE_LIGHT:
    cout << "Light (lux)";
    break;
  case SENSOR_TYPE_PRESSURE:
    cout << "Pressure (hPa)";
    break;
  case SENSOR_TYPE_PROXIMITY:
    cout << "Distance (cm)";
    break;
  case SENSOR_TYPE_GRAVITY:
    cout << "Gravity (m/s2)";
    break;
  case SENSOR_TYPE_LINEAR_ACCELERATION:
    cout << "Linear Acceleration (m/s2)";
    break;
  case SENSOR_TYPE_ROTATION_VECTOR:
    cout << "Rotation vector";
    break;
  case SENSOR_TYPE_RELATIVE_HUMIDITY:
    cout << "Relative Humidity (%)";
    break;
  case SENSOR_TYPE_AMBIENT_TEMPERATURE:
    cout << "Ambient Temp (C)";
    break;
  case SENSOR_TYPE_OBJECT_TEMPERATURE:
    cout << "Object Temp (C)";
    break;
  case SENSOR_TYPE_VOLTAGE:
    cout << "Voltage (V)";
    break;
  case SENSOR_TYPE_CURRENT:
    cout << "Current (mA)";
    break;
  case SENSOR_TYPE_COLOR:
    cout << "Color (RGBA)";
    break;
  }

  cout <<  << endl;
  cout << "Driver Ver:   ";
  cout << sensor.version << endl;
  cout << "Unique ID:    ";
  cout << sensor.sensor_id << endl;
  cout << "Min Value:    ";
  cout << sensor.min_value << endl;
  cout << "Max Value:    ";
  cout << sensor.max_value << endl;
  cout << "Resolution:   ";
  cout << sensor.resolution << endl;
  cout << "------------------------------------\n" << endl;
}
