#include "PizzaStory.h"

int main() {
	PizzaStory *story = new PizzaStory;
	story->createPizza("North");
	story->createPizza("Sourth");
	system("pause");
	return 1;
}