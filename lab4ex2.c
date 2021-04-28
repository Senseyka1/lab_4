#include <stdio.h>

int main() {
  int a = 0;
  const int min = 2, max = 200;

// -------------------------FOR----------------------------
for (int i = min; i < max; i++){
  if (i%15==0)
  a+=i;
}
printf("\n----------------------------------------------|\n");
printf("1) Результат обчислення циклом for:      %d", a);

// --------------------------WHILE---------------------------
a = 0;
int i = min;
while (i < max){
  if (i%15==0)
    a+=i;
    i++;
}
printf("\n----------------------------------------------|\n");
printf("2) Результат обчислення циклом while:    %d", a);

// ------------------------DO-WHILE--------------------------
a = 0;
i = min;
do {
  if (i%15==0)
  a+=i;
  i++;
} while (i < max);
printf("\n----------------------------------------------|\n");
printf("3) Результат обчислення циклом do-while: %d", a);  
printf("\n----------------------------------------------|\n");


return 0;

}