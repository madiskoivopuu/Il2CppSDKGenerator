#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifiersComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifiersComponent"));
	}

	template <typename T = ModifierEntity*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(ModifiersComponent*))(Il2CppBase() + 0x1EA5FE4))(this);
	}

};

