#include "sensor.h"
#include <stdbool.h>
#include <stdio.h>

enum Status sensorDetection(struct SensorReading reading) {
    if (reading.humidity > 100 || reading.humidity < 0 || reading.pm2_5 < 0) {
        return INVALID;
    } else if (reading.pm2_5 > 35.0) {
        return WARNING;
    } else {
        return OK;

    }
}

double question(char text[]) {
    double done = 0;
    double input;
    char line[11];
    do {
        printf("Enter value for %s: ", text);
        fgets(line, sizeof line, stdin);
        if (sscanf(line, "%lf", &input) == 1) {
            printf("อ่าน %s สำเร็จ\n", text);
            done = 1;
            return input;
        } else {
            printf("ข้อมูลไม่ถูกต้อง please try again\n");
        }
    } while (done == 0);

            case 0:
                printf("ข้อมูลไม่ถูกต้อง please try again\n");
                getchar();

            case EOF:
                printf("program ending อินพุตสิ้นสุด\n");
                break;

            default:
                printf("ค่าอื่นที่ไม่ได้ระบุไว้ please try again\n");
                break;
        }
    } while (done == 0);
}
