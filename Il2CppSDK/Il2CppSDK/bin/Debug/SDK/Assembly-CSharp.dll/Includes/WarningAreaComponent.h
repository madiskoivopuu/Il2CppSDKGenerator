#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningAreaComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaComponent"));
	}

	template <typename T = WarningAreaParam*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(WarningAreaComponent*, Il2CppObject*))(Il2CppBase() + 0x112BCCC))(this, targetObject);
	}

};

