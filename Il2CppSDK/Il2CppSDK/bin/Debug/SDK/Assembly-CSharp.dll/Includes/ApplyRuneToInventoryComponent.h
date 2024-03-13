#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyRuneToInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyRuneToInventoryComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyRuneToInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x18953C4))(this, target);
	}

};

