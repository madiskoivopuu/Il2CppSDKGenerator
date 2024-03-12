#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveTarget"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
