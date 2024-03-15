#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageEffect"));
	}


	template <typename R = void> R Update() {
		return ((R (*)(DamageEffect*))(Il2CppBase() + 0x164B318))(this);
	}

};

