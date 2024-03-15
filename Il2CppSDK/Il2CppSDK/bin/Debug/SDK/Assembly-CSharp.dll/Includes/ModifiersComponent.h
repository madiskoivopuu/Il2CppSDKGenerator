#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifiersComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifiersComponent"));
	}

	template <typename R = ModifierEntity*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Clear() {
		return ((R (*)(ModifiersComponent*))(Il2CppBase() + 0x1EA5FE4))(this);
	}

};

