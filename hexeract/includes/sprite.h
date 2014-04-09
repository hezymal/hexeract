#ifndef __SPRITE_H__
#define __SPRITE_H__


namespace hexeract
{
	class Sprite {
	public:
		Sprite();

		void onUpdate();
		void onMouse();
		void onKeyboard();

	private:
		std::map<std::string, Sprite> childs;
	};
}


#endif

