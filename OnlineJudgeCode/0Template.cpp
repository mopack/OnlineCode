#include <iostream>
#include <cstdlib>
using namespace std;

class Robot {} A, B; //Two Robots: A & B
bool AtOtherRobotOrigin(Robot X);
void MoveRight(Robot X, int n);
void MoveLeft(Robot X, int n);

int main() {
	while (1) {
		if (AtOtherRobotOrigin(A)) {
			while (1) { // Until Collision
				MoveRight(B, 2); MoveRight(A, 1); // Chase
			}
			break;
		}else if (AtOtherRobotOrigin(B)) { 
			while (1) { // Until Collision
				MoveRight(A, 2); MoveRight(B, 1); // Chase
			}
			break;
		}else{
			MoveRight(A, 1); MoveRight(B, 1);
		}
	}

	system("pause");
	return 0;
} 