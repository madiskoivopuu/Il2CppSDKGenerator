#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IModifier"));
	}


	template <typename T = float> T GetValue() {
		return ((T (*)(IModifier*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(IModifier*))(Il2CppBase() + 0x0))(this);
	}

};

}
