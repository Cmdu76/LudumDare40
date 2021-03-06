#ifndef PRESTATE_HPP
#define PRESTATE_HPP

#include "../Engine/Application/StateManager.hpp"

#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Sprite.hpp>

class PreState : public oe::State
{
	public:
		PreState(oe::StateManager& manager);

		bool handleEvent(const sf::Event& event);
		bool update(oe::Time dt);
		void render(sf::RenderTarget& target);

	private:
		sf::Texture mTexture;
		sf::Sprite mScreen;
		U32 mI;
};

#endif // PRESTATE_HPP
