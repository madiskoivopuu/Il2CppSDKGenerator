#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContextAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContextAction"));
	}

	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Action() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& Important() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

