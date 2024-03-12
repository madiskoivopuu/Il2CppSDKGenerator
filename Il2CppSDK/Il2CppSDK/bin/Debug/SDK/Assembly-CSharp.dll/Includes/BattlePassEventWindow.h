#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassWindow" 

class BattlePassEventWindow: BattlePassWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassEventWindow"));
	}


	template <typename T = uintptr_t> T get_ContextType() {
		return ((T (*)(BattlePassEventWindow*))(Il2CppBase() + 0x1677B18))(this);
	}

};

}
