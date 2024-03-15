#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UdpClientConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UdpClientConfig"));
	}

	template <typename R = Il2CppString*> R& Ip() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Port() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ConnectKey() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = EProtocolType> R& ProtocolType() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

