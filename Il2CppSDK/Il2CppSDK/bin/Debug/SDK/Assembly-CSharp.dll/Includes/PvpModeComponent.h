#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 

class PvpModeComponent : public EnumComponent1<PvpMode*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvpModeComponent"));
	}


	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(PvpModeComponent*, Il2CppObject*))(Il2CppBase() + 0x11C33D0))(this, blueprintComponent);
	}

};

