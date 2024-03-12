#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UdpClientConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UdpClientConfig"));
	}

	template <typename T = Il2CppString*> T& Ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ConnectKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ProtocolType() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
