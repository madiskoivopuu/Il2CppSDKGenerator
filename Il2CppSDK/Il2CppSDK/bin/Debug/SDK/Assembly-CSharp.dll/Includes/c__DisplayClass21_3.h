#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass213
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_3"));
	}

	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& content() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = float> T Initb__9() {
		return ((T (*)(cDisplayClass213*))(Il2CppBase() + 0x1165F8C))(this);
	}
	template <typename T = void> T Initb__10(float y) {
		return ((T (*)(cDisplayClass213*, float))(Il2CppBase() + 0x1165FB4))(this, y);
	}
	template <typename T = void> T Initb__11() {
		return ((T (*)(cDisplayClass213*))(Il2CppBase() + 0x1165FFC))(this);
	}

};

}
