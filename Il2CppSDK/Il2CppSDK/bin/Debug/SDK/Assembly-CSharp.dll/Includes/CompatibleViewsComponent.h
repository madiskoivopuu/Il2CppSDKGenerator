#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompatibleViewsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompatibleViewsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NotItems() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsCompatibleWith(Il2CppString* name) {
		return ((T (*)(CompatibleViewsComponent*, Il2CppString*))(Il2CppBase() + 0xE2CFB4))(this, name);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CompatibleViewsComponent*, uintptr_t))(Il2CppBase() + 0xE2D050))(this, targetObject);
	}

};

}
