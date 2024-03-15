#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AltSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AltSkill"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

