#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AltSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AltSkill"));
	}

	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
