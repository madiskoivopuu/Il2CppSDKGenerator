#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& WithExternal() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ResourceConditionComponent*, uintptr_t))(Il2CppBase() + 0x119C2B4))(this, target);
	}

};

}
