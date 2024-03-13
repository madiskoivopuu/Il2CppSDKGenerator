#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Ferr2DTSegmentDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ferr2DT_SegmentDescription"));
	}

	template <typename T = Ferr2DTTerrainDirection*> T& applyTo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& zOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& yOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& leftCap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& innerLeftCap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rightCap() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& innerRightCap() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& body() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& capOffset() {
		return *(T*)((uintptr_t)this + 0x68);
	}


};

