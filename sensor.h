#ifndef SENSOR_H
#define SENSOR_H

enum Status {
        OK,
        WARNING,
        INVALID
    };

struct SensorReading {
    unsigned sensor_id;
    double pm2_5;
    double temperature;
    double humidity;
    enum Status status;
};

enum Status sensorDetection(struct SensorReading reading);

#endif // SENSOR_H
