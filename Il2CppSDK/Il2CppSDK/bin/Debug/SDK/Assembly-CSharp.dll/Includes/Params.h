#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Params
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Params"));
	}

	template <typename T = uintptr_t> T& UdpConfig() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& WorldId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& ServerUserId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& ServerSessionId() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
