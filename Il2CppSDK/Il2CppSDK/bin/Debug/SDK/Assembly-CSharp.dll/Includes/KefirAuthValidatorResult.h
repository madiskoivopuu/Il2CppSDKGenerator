#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirAuthValidatorResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirAuthValidatorResult"));
	}

	template <typename R = bool> R& IsValid() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Error() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& KefirID() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& NickName() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

