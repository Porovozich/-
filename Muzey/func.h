struct person {
  char name[40];
  int price;
  int longs;
};
void create(struct person ** arr, int*n);
void read(struct person ** arr, int*n);
void write(struct person * arr, int n);
void research(struct person * arr, int n);
