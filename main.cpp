#include <SFML/Graphics.hpp>  //���������� ����

sf::RenderWindow window;  //������ ����
//sf::CircleShape circle(70, 4);  //����� ���� � �������� 70 �  4 ������
sf::RectangleShape rectangle(sf::Vector2f(50,50));  //������������� � ������� 150 � ������� 5
sf::RectangleShape ground(sf::Vector2f(680,30));
//sf::Image image;  //������ �������� � ��������� image
//sf::Texture texture;  //������ �������� � ��������� texture
//sf::Sprite sprite;  //������ ������ � ��������� sprite 
int x=50,y=50;
int a;
int main()
{
    
	window.create(sf::VideoMode(640,480), "FGSfml");  //������� ���� � ����������� 640:480 � �������� FGSfml
	window.setFramerateLimit(60);  // ���

	//circle.setFillColor(sf::Color::Transparent);  //���� ����� ���������� 
	//circle.setOutlineColor(sf::Color::Yellow);  //���� ������� �����
	//circle.setOutlineThickness(2);  //������� �������
	//circle.setPosition(320,240);  //������� �����
	//circle.rotate(45);  //������� �� 45 �������� 

	rectangle.setFillColor(sf::Color::Transparent);  //������ ���� ��������������
	rectangle.setOutlineColor(sf::Color::Yellow);
	rectangle.setOutlineThickness(2);
	rectangle.setPosition(y, x);  //������ ������� 
	
	ground.setFillColor(sf::Color::Green);
	ground.setPosition(0,450);
	/*image.loadFromFile("imag.png");  //��������� ��������
	texture.loadFromImage(image);  //��������� �������� 
	sprite.setTexture(texture);  //��������� �������
	sprite.setPosition(50, 50);  //� ������������� ������� ��������*/
	
	while (window.isOpen())  //������� ��� �������� ����
	{
		sf::Event event;  //������� �������
		while(window.pollEvent(event))  //���� ������� ��������� �������
		{
			if(event.type==sf::Event::Closed)  //���� ������ �� ��������
				window.close();  //�������

		}
		if(x>=400)
			{
				rectangle.setPosition(y,400);
		}
			
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
		rectangle.move(-1,0);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
		rectangle.move(+1,0);
		}if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
		rectangle.move(0,-1);
		}if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
		rectangle.move(0,+1);
		}
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
		rectangle.rotate(-1);
		}
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
		rectangle.rotate(+1);
		}


			

	window.clear(sf::Color::Black);  //������� ������ ������ � ���������� ���
	/*window.draw(sprite);  // ������ ��� ������*/
	window.draw(ground);
	window.draw(rectangle);  //������� �����(��������)
	window.display();  //�� ��??
	
	}

    return 0;
}