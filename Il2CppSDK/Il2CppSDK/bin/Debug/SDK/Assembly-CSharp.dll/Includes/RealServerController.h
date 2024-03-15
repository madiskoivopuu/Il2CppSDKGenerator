#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RealServerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealServerController"));
	}

	template <typename R = int32_t> R& worldCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& URL() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& arenaPort() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& mapPort() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& DisableLogger() {
		return *(R*)((uintptr_t)this + 0x30);
	}


};

