/*
// lorawan_driver.hpp
#ifndef LORAWAN_DRIVER_H
#define LORAWAN_DRIVER_H

#include "lorawan/LoRaWANInterface.h"
#include "lorawan/system/lorawan_data_structures.h"
#include "events/EventQueue.h"
#include "TemperatureSensor.hpp"


#define TX_TIMER                        10000


 // Maximum number of events for the event queue.
 // 10 is the safe number for the stack events, however, if application
 //also uses the queue for whatever purposes, this number should be increased.
 
#define MAX_NUMBER_OF_EVENTS            10


 //Maximum number of retries for CONFIRMED messages before giving up
 
#define CONFIRMED_MSG_RETRY_COUNTER     3


// Dummy pin for dummy sensor
 
#define PC_9                            0

extern uint8_t tx_buffer[30];
extern uint8_t rx_buffer[30];
static EventQueue ev_queue(MAX_NUMBER_OF_EVENTS *EVENTS_EVENT_SIZE);

extern LoRaWANInterface lorawan;

void send_message();
//void receive_message();
//void lora_event_handler(lorawan_event_t event);

#endif  // LORAWAN_DRIVER_H
*/