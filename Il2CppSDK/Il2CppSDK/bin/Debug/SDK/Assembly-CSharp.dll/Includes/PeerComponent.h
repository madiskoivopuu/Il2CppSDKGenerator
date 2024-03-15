#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PeerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PeerComponent"));
	}

	template <typename R = uintptr_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Ip() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

