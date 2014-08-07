#include "SFML/Graphics.hpp"

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch ( event.type )
			{
			case sf::Event::Closed:
				window.close( );

				break;
			}
		}

		window.clear( );

		window.display( );
	}
}