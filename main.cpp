#include <SFML/Graphics.hpp>  //подключяем СФМЛ

sf::RenderWindow window;  //Задаем окно
//sf::CircleShape circle(70, 4);  //задем круг с радиусом 70 и  4 углами
sf::RectangleShape rectangle(sf::Vector2f(50,50));  //прямоугольник с шириной 150 и высотой 5
sf::RectangleShape ground(sf::Vector2f(680,30));
//sf::Image image;  //задаем картинку с названием image
//sf::Texture texture;  //задаем текстуру с названием texture
//sf::Sprite sprite;  //задаем спрайт с названием sprite 
int x=50,y=50;
int a;
int main()
{
    
	window.create(sf::VideoMode(640,480), "FGSfml");  //создаем оуно с разрешением 640:480 и азванием FGSfml
	window.setFramerateLimit(60);  // фпс

	//circle.setFillColor(sf::Color::Transparent);  //цвет круга прозрачний 
	//circle.setOutlineColor(sf::Color::Yellow);  //цвет обводки круга
	//circle.setOutlineThickness(2);  //толжина обводки
	//circle.setPosition(320,240);  //позиция круга
	//circle.rotate(45);  //поворот на 45 градусов 

	rectangle.setFillColor(sf::Color::Transparent);  //задаем цвет прямоугольнику
	rectangle.setOutlineColor(sf::Color::Yellow);
	rectangle.setOutlineThickness(2);
	rectangle.setPosition(y, x);  //задаем позицию 
	
	ground.setFillColor(sf::Color::Green);
	ground.setPosition(0,450);
	/*image.loadFromFile("imag.png");  //загружаем квртинки
	texture.loadFromImage(image);  //загружаем текстуры 
	sprite.setTexture(texture);  //загружаем спрайти
	sprite.setPosition(50, 50);  //и устанавливаем позицию справйта*/
	
	while (window.isOpen())  //фунуция при открытом окне
	{
		sf::Event event;  //создаем событие
		while(window.pollEvent(event))  //цикл которий считивает событие
		{
			if(event.type==sf::Event::Closed)  //если нажали на закритие
				window.close();  //закрить

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


			

	window.clear(sf::Color::Black);  //заливка екрана черним и обновления его
	/*window.draw(sprite);  // рисуем наш спрайт*/
	window.draw(ground);
	window.draw(rectangle);  //рисовка круга(квадрата)
	window.display();  //хз че??
	
	}

    return 0;
}