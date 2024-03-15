#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass3_0"));
	}

	template <typename R = OnGameThreadDiscoveryListener*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& lostEndpointId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R OnEndpointLostb__0() {
		return ((R (*)(cDisplayClass30*))(Il2CppBase() + 0x22A874C))(this);
	}

};

