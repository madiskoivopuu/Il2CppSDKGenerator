#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegionView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RegionView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Latency() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ServersContainer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ServerPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _ping() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init(uintptr_t context, Il2CppString* regionName) {
		return ((T (*)(RegionView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x139E14C))(this, context, regionName);
	}

};

}
