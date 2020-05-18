#include <unistd.h>
#include <stdio.h>

int main () {
  if( symlink("/tmp/realfile", "/tmp/link") != 0 )
    perror("Can't create the symlink");
}
