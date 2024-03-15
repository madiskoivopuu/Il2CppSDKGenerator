#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerDetail"));
	}

	template <typename R = Il2CppString*> R& Region() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Url() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ServerDetail*))(Il2CppBase() + 0xE94368))(this);
	}

};

