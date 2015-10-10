#include <spark-pusher.h>
#include <Ethernet.h>
#include <PusherClient.h>

PusherClient client;

void setup() {
  if(client.connect("your-api-key-here")) {
    client.subscribe("robot_channel");
    client.bind("forward", moveForward);
  }
  else {
    while(1) {}
  }
}

void loop() {

}
