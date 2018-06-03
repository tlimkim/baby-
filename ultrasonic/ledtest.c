#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/kdev_t.h>

#define DEV_PATH "/dev/led_dev"

int fd = 0;

void ledOn ()
{ 
  //int fd = 0;

  if ((fd = open(DEV_PATH, O_RDWR | O_NONBLOCK)) < 0) {
    perror("open()");
    exit(1);
  }

  printf("LED Success \n");
  sleep(1);

}

void ledOff()
{
  close(fd);
}
