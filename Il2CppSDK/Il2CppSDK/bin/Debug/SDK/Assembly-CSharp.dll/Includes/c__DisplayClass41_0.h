#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass410
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass41_0"));
	}

	template <typename T = int64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T SwitchToShortModeb__0(int32_t b) {
		return ((T (*)(cDisplayClass410*, int32_t))(Il2CppBase() + 0x0))(this, b);
	}

};

}
