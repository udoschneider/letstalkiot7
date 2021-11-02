#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define VERSION "0.1"

void display_help();

int main(int argc, char *argv[]) {
  int c;

  while ((c = getopt(argc, argv, "v")) != -1)
    switch (c) {
    case 'v':
      display_help();
      exit(0);
    }

  printf("Hello World!\n");
  return 0;
}

void display_help() {
  printf("helloworld Version %s - built %s / %s - %s\n", VERSION, __DATE__,
         __TIME__, __TIMESTAMP__);
}