#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegionView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RegionView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Latency() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ServersContainer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ServerView*> R& ServerPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _ping() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Init(ServerInfoContext* context, Il2CppString* regionName) {
		return ((R (*)(RegionView*, ServerInfoContext*, Il2CppString*))(Il2CppBase() + 0x139E14C))(this, context, regionName);
	}

};

