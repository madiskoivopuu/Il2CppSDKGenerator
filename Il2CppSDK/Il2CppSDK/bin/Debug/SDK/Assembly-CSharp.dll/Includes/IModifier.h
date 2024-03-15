#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IModifier"));
	}


	template <typename R = float> R GetValue() {
		return ((R (*)(IModifier*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ModifierGroup> R GetGroup() {
		return ((R (*)(IModifier*))(Il2CppBase() + 0x0))(this);
	}

};

