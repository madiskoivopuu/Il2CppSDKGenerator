#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassWindow.h" 

class BattlePassEventWindow : public BattlePassWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassEventWindow"));
	}


	template <typename R = uintptr_t> R get_ContextType() {
		return ((R (*)(BattlePassEventWindow*))(Il2CppBase() + 0x1677B18))(this);
	}

};

