#include "test02.h"

void main() {
	Shape* mixedShapes[5];

	mixedShapes[0] = new Triangle();
	mixedShapes[1] = new Eclipse();
	mixedShapes[2] = new Rectangle();
	mixedShapes[3] = new Circle();
	mixedShapes[4] = new ColorRect();

	for (int I = 0; I < 5; I++) {
		mixedShapes[I]->display();
		delete mixedShapes[I];
	}

}