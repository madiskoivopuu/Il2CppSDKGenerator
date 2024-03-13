#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionLabels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionLabels"));
	}

	template <typename T = Il2CppString*> T& MainLabel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& CyclicLabel() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

