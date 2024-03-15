#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningAreaComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaComponent"));
	}

	template <typename R = WarningAreaParam*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(WarningAreaComponent*, Il2CppObject*))(Il2CppBase() + 0x112BCCC))(this, targetObject);
	}

};

