

int main() {
  int y = 200;
  int const *p = &y;
  
  (*p) = 300  // Нельзя

}
