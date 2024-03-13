#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointsComponent"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PointsComponent*, Il2CppObject*))(Il2CppBase() + 0x1574F88))(this, targetObject);
	}

};

