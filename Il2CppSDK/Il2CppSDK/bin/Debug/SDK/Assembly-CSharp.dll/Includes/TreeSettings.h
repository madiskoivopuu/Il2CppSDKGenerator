#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreeSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreeSettings"));
	}

	template <typename R = Il2CppArray<int32_t>*> R& axes() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = int32_t> R GetAxis(int32_t aDepth) {
		return ((R (*)(TreeSettings*, int32_t))(Il2CppBase() + 0x10C2798))(this, aDepth);
	}
	template <typename R = float> R AxisDist(int32_t aAxis, uintptr_t a, uintptr_t b) {
		return ((R (*)(TreeSettings*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x10C2A48))(this, aAxis, a, b);
	}

};

