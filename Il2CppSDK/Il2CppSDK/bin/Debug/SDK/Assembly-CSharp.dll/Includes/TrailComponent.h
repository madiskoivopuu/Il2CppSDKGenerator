#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrailComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrailComponent"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TrailComponent*, Il2CppObject*))(Il2CppBase() + 0x1511BB4))(this, target);
	}

};

