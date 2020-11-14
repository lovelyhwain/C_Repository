#include "PERSON.H"

int main(void) {
	Person a("popo", "chocho");
	a.printAll();

	Teacher c("Math");
	c.setId("2312");
	c.setName("momo");
	c.setUniv("kong");
	c.printAll();

	Student s1(3, 7);
	s1.setId("202083353");
	s1.setName("hwain");
	s1.setUniv("HUFS");
	s1.printAll();

	system("pause");
}