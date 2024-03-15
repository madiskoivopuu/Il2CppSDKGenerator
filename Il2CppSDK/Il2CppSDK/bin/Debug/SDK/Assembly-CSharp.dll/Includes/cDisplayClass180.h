#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass180
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass18_0"));
	}

	 Nullable1<uintptr_t>*& advertisingDuration() {
		return *(Nullable1<uintptr_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R StartDiscoveryb__0(uintptr_t v) {
		return ((R (*)(cDisplayClass180*, uintptr_t))(Il2CppBase() + 0x1141E4C))(this, v);
	}

};

