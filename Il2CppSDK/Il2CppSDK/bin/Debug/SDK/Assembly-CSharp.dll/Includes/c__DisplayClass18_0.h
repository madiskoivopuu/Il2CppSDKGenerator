#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass180
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass18_0"));
	}

	template <typename T = void*> T& advertisingDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T StartDiscoveryb__0(uintptr_t v) {
		return ((T (*)(cDisplayClass180*, uintptr_t))(Il2CppBase() + 0x1141E4C))(this, v);
	}

};

}
