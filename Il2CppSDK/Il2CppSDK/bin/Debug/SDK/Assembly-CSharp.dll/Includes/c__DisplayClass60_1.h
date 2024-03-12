#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass601
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass60_1"));
	}

	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadMoreScoresb__2(bool resolutionRequired) {
		return ((T (*)(cDisplayClass601*, bool))(Il2CppBase() + 0x1140148))(this, resolutionRequired);
	}

};

}
