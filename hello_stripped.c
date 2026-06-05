#include <unistd.h>

int main() {
  const char msg[] = "Hello, Akuma!\n";
  write(1, msg, sizeof(msg) - 1);
  return 0;
}
