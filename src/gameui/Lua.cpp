// Copyright © 2008-2020 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

#include "Lua.h"

namespace GameUI {
	namespace Lua {

		void Init()
		{
			LuaObject<GameUI::Face>::RegisterClass();
		}

	} // namespace Lua
} // namespace GameUI
