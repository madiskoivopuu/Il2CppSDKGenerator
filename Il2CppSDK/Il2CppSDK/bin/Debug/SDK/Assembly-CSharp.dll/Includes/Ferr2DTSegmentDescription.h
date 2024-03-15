#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Ferr2DTSegmentDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ferr2DT_SegmentDescription"));
	}

	template <typename R = Ferr2DTTerrainDirection*> R& applyTo() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& zOffset() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& yOffset() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& leftCap() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& innerLeftCap() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& rightCap() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = uintptr_t> R& innerRightCap() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& body() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& capOffset() {
		return *(R*)((uintptr_t)this + 0x68);
	}


};

