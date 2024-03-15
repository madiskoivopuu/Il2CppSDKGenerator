#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanOperateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanOperateComponent"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CanOperateComponent*, Il2CppObject*))(Il2CppBase() + 0x15B5CBC))(this, target);
	}

};

