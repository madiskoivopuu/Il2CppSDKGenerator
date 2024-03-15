#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IModifierContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IModifierContext"));
	}


	template <typename R = ModifierContext*> R get_modifiers() {
		return ((R (*)(IModifierContext*))(Il2CppBase() + 0x0))(this);
	}

};

