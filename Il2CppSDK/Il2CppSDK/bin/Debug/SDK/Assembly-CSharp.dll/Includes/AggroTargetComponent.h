#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggroTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AggroTargetComponent"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Movable() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AggroTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x129BFB8))(this, targetObject);
	}

};

