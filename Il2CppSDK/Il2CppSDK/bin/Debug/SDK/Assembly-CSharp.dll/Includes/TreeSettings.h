#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreeSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreeSettings"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& axes() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T GetAxis(int32_t aDepth) {
		return ((T (*)(TreeSettings*, int32_t))(Il2CppBase() + 0x10C2798))(this, aDepth);
	}
	template <typename T = float> T AxisDist(int32_t aAxis, uintptr_t a, uintptr_t b) {
		return ((T (*)(TreeSettings*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x10C2A48))(this, aAxis, a, b);
	}

};

