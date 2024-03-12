#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageEffect"));
	}


	template <typename T = void> T Update() {
		return ((T (*)(DamageEffect*))(Il2CppBase() + 0x164B318))(this);
	}

};

}
