#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressPerLocationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressPerLocationComponent"));
	}

	template <typename T = int32_t> T& LocationId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ProgressPerLocationComponent*, Il2CppObject*))(Il2CppBase() + 0x16E541C))(this, target);
	}

};

