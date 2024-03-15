#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPointConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPointConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Active() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MapPointConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x12C1230))(this, target);
	}

};

