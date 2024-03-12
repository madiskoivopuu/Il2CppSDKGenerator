#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirAuthValidatorResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirAuthValidatorResult"));
	}

	template <typename T = bool> T& IsValid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Error() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& KefirID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& NickName() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
