#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointLabelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointLabelComponent"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PointLabelComponent*, Il2CppObject*))(Il2CppBase() + 0x1574428))(this, targetObject);
	}

};

