#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerDetail"));
	}

	template <typename T = Il2CppString*> T& Region() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ServerDetail*))(Il2CppBase() + 0xE94368))(this);
	}

};

