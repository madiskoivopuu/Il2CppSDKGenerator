#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RealServerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealServerController"));
	}

	template <typename T = int32_t> T& worldCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& URL() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& arenaPort() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mapPort() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& DisableLogger() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

