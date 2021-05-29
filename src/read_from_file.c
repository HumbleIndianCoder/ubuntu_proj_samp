#include"../inc/header_files.h"

void read_from_file() {

  int fd;

  fd = open("../src/filedata.txt", O_RDONLY);
  //perror("open");

  char buf[100];
  int n;

  // read 100 chars from the given file
  n = read(fd, buf, sizeof(buf));
  //perror("read");

  printf("\n The file content is : \n");
  // write the buffer into the console
  write(1, buf, n);
  //perror("write");

  printf("\n");
  
}
