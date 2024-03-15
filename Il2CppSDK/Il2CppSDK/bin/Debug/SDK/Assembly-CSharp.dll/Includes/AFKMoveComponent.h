#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKMoveComponent"));
	}

	template <typename R = int64_t> R& Tick() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AFKMoveComponent*, Il2CppObject*))(Il2CppBase() + 0x1D958E8))(this, targetObject);
	}

};

