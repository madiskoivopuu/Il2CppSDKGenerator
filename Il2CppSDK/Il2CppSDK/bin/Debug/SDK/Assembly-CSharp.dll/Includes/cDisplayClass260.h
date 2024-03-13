#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass260
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_0"));
	}

	template <typename T = Action1INearbyConnectionClient*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T InitializeNearbyb__0(INearbyConnectionClient* client) {
		return ((T (*)(cDisplayClass260*, INearbyConnectionClient*))(Il2CppBase() + 0x10B055C))(this, client);
	}

};

