#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PeerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PeerComponent"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Ip() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

