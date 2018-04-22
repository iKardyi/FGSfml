#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

int main(int argc, const char * argv[])
{
    sf::RenderWindow(window);
    window.create(sf::VideoMode(800, 600), "My window");

	sf::RectangleShape k(sf::Vector2f(5,100)); 
	k.setPosition(5, 10);
	sf::RectangleShape k1(sf::Vector2f(5,100));
	k1.setPosition(50, 5);
	k1.rotate(45);
	sf::RectangleShape k2(sf::Vector2f(5,100));
	k2.setPosition(5,60);
	k2.rotate(-45);//k-complete

	sf::CircleShape ko(50,20), o(40,20);
	ko.setPosition(100,60);
	o.setFillColor(sf::Color::Blue);
	o.setPosition(110,70);//o-complete
  
	sf::RectangleShape l(sf::Vector2f(5,100)),l1(sf::Vector2f(5,100));
	l.setPosition(350, 5);
	l.rotate(45);
	l1.setPosition(350, 5);
	l1.rotate(-45);//l-complete

	sf::CircleShape z(50,20), z1(40,20);
	z.setPosition(500,60);
	z1.setPosition(510,70);
	z1.setFillColor(sf::Color::Blue);
	sf::RectangleShape i(sf::Vector2f(5,100)),i1(sf::Vector2f(5,100));
	i.setPosition(570, 145);
	i1.setPosition(570, 145);
	i1.rotate(45);
	//ya
		
		sf::RectangleShape l2(sf::Vector2f(5,100)),l3(sf::Vector2f(5,100));
	l2.setPosition(70, 200);
	l2.rotate(45);
	l3.setPosition(70, 200);
	l3.rotate(-45);//l

		
	sf::CircleShape lo(50,20), o1(40,20);
	lo.setPosition(200,250);
	o1.setFillColor(sf::Color::Blue);
	o1.setPosition(210,260);//o


	sf::RectangleShape x(sf::Vector2f(5, 100)), x1(sf::Vector2f(5,100));//x
	x.setPosition(460,250);
	x.rotate(45);
	x1.setPosition(390, 250);
	x1.rotate(-45);
		/* sf::Image img;
   img.create(20, 20, sf::Color::Yellow);
	
	   sf::Texture imgT;
	imgT.loadFromImage(img);

    sf::Sprite sprite;
    sprite.setTexture(imgT);
	sprite.setPosition(50,150);
  */

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed) window.close();
        }


		window.clear(sf::Color::Blue);
		window.draw(k);
		window.draw(k1);
		window.draw(k2);
		window.draw(ko);
		window.draw(o);
		window.draw(l);
		window.draw(l1);
		window.draw(z);
		window.draw(z1);
		window.draw(i);
		window.draw(i1);
		window.draw(l2);
		window.draw(l3);
		window.draw(lo);
		window.draw(o1);
		window.draw(x);
		window.draw(x1);
		
		//window.draw(sprite);*/
		window.display();
    }
    return 0;
}
