#ifndef __HEXERACT_H__
#define __HEXERACT_H__

#include "window.h"
#include "graphics.h"
#include "audio.h"
#include "scene.h"


namespace hexeract
{
	class Engine :
		public Window,
		public WindowEventHandler
	{
	public:
		Engine();

	protected:
		void setTitle(std::string &sTitle);
		void setSize(int iWidth, int iHeight);

	private:
		void onUpdate();
		void onDraw();
		void onMouse();
		void onKeyboard();

		std::map<std::string, Scene*> scenes;

		Graphics* graphics;
		Audio* audio;
	};
}


#endif

