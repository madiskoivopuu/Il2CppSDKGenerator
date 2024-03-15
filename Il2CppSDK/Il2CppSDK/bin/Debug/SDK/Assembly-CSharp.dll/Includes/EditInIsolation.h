#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EditInIsolation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EditInIsolation"));
	}

	template <typename R = Il2CppArray<bool>*> R& _wasEnabled() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

