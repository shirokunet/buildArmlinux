#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  int fd;
  int rc = 0;
  char rd_buf[10];

  printf("Program Starts: read uptime and display every minute:\n");
  while(1) {
    wait(60);
    fd = open("/proc/jiffies_count",O_RDWR);
    if(fd == -1) {
      perror("open proc file failed");
      exit(-1);
    }
    printf("open proc file succeeded\n");
    rc = read(fd,rd_buf,80);
    close(fd);
    printf("Uptime: %s\n",rd_buf);
    sleep((unsigned int)5);
  }
  return 0;
}
