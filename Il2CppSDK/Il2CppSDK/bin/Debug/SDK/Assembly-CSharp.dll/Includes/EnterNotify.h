#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterNotify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterNotify"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
