#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IModifierContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IModifierContext"));
	}


	template <typename T = ModifierContext*> T get_modifiers() {
		return ((T (*)(IModifierContext*))(Il2CppBase() + 0x0))(this);
	}

};

