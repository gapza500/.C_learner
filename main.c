#include <stdio.h>
#include "sensor.h"

int main() {
    for (int i = 0; i < 10; i++) {
        struct SensorReading reading;
        reading.sensor_id = i+1;
        printf("Enter PM2.5 value for sensor %d: ", reading.sensor_id);
        scanf("%lf", &reading.pm2_5);
        printf("Enter temperature value for sensor %d: ", reading.sensor_id);
        scanf("%lf", &reading.temperature);
        printf("Enter humidity value for sensor %d: ", reading.sensor_id);
        scanf("%lf", &reading.humidity);
        reading.status = sensorDetection(reading);
    };
}
