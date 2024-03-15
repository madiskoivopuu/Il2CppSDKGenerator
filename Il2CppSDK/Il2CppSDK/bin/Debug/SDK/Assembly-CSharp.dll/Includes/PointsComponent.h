#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointsComponent"));
	}

	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Number() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& Offset() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PointsComponent*, Il2CppObject*))(Il2CppBase() + 0x1574F88))(this, targetObject);
	}

};

