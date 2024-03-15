#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttachComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttachComponent"));
	}

	template <typename R = AttachType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AttachComponent*, Il2CppObject*))(Il2CppBase() + 0x1A5A4A4))(this, targetObject);
	}

};

