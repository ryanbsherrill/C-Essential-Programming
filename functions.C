#include <stdio.h>
#include <stdlib.h>

// functiion prototype defs
void assessRoomCapacities(void);
void estimateWaitingVisitors(void);
void processData(void);
void generateReport(void);

// global vars
int room1, room2, room3;
int visitors1, visitors2, visitors3;
int totalAvailableSeats, totalWaitingVisitors;

// main function
int main(void) {
  assessRoomCapacities();
  estimateWaitingVisitors();
  processData();
  generateReport();

  return 0;
}

// function definitions
void assessRoomCapacities(){
  printf("Enter seats left in the room 1: ");
  scanf("%d", &room1);
  printf("Enter seats left in the room 2: ");
  scanf("%d", &room2);
  printf("Enter seats left in the room 3: ");
  scanf("%d", &room3);
}

void estimateWaitingVisitors(){
  printf("Enter number of visitors waiting for room 1: ");
  scanf("%d", &visitors1);
  printf("Enter number of visitors waiting for room 2: ");
  scanf("%d", &visitors2);
  printf("Enter number of visitors waiting for room 3: ");
  scanf("%d", &visitors3);
}

void processData(){
  totalAvailableSeats = room1 + room2 + room3;
  totalWaitingVisitors = visitors1 + visitors2 + visitors3;
}

void generateReport(){
  printf("Overall there are still seats available (1=Yes, 0=No): %d \n", totalAvailableSeats);
  printf("Room 1 can accept more visitors(1=Yes, 0=No): %d \n", room1 > visitors1);
  printf("Room 2 can accept more visitors(1=Yes, 0=No): %d \n", room2 > visitors2);
  printf("Room 3 can accept more visitors(1=Yes, 0=No): %d \n", room3 > visitors3);
  printf("On average, there are %d visitors waiting per room\n", (visitors1+visitors2+visitors3)/3);
}
