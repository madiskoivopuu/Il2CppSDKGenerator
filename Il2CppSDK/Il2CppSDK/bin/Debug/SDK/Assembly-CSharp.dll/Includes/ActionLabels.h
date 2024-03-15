#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionLabels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionLabels"));
	}

	template <typename R = Il2CppString*> R& MainLabel() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& CyclicLabel() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

