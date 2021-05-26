#ifndef __SERIAL_HPP__
#define __SERIAL_HPP__
#include <queue>
void serial_init(char *port_name, int baudrate);
// void send_pose_to_serial(std::queue<float> send_to_stm32);
void send_pose_to_serial(float *send_to_serial_msg);
int serial_getc(char *c);

#endif
