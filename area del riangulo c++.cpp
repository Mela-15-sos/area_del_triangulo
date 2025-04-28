#include<iostream>
int main(){
	int base, altura, area;
	std::cout<<("ingresa la base\n");
	std::cin>> base;
	std::cout<<("ingresa la altura\n");
	std::cin>> altura;
	area=base*altura/2;
	std::cout<<("el area del triangulo es: %d",area);
		std::cout<<("con una base de:%d",base);
		std::cout<<("con una altura de:%d",altura);
	return 0;
	
}
