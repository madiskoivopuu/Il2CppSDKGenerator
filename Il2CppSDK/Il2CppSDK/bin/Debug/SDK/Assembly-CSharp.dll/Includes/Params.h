#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Params
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Params"));
	}

	template <typename R = UdpClientConfig*> R& UdpConfig() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& WorldId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& ServerUserId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& ServerSessionId() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

