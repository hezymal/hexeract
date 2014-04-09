#ifndef __SCENE_H__
#define __SCENE_H__

#include "object.h"


namespace hexeract
{
	class Scene {
	public:
		Scene();
		~Scene();

		void onUpdate();
		void onDraw();
		void onMouse();
		void onKeyboard();

	private:
		std::map<std::string, Object> childs;
	};
}


#endif

