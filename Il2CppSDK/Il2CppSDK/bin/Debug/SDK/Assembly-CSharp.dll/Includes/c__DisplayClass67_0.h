#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass670
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass67_0"));
	}

	template <typename T = uintptr_t> T& avatar() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& world() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T OnShowb__0(uintptr_t c) {
		return ((T (*)(cDisplayClass670*, uintptr_t))(Il2CppBase() + 0x10B2A30))(this, c);
	}
	template <typename T = bool> T OnShowb__1(uintptr_t c) {
		return ((T (*)(cDisplayClass670*, uintptr_t))(Il2CppBase() + 0x10B2AAC))(this, c);
	}

};

}
