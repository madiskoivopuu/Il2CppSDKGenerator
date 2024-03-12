#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass211
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_1"));
	}

	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& content() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initb__5() {
		return ((T (*)(cDisplayClass211*))(Il2CppBase() + 0x1165ECC))(this);
	}

};

}
