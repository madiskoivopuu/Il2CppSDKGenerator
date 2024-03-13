#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningController"));
	}

	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& WarningTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& WarningColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BaseColorAnim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AnimatedColorAnim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AnimatedRangeAnim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isCircle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CircleWarning() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _baseCircle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _holeCircle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _circleAnimated() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& SafeZone() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& Holed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& isLine() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = uintptr_t> T& LineWarning() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _rightPart() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _leftPart() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _middlePart() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isCone() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ConeWarning() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _baseCone() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _animatedCone() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& trianglesPerRad() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112C9F0))(this);
	}
	template <typename T = uintptr_t> T CircleWarningAnim() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112CC64))(this);
	}
	template <typename T = uintptr_t> T LineWarningAnim() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112CCDC))(this);
	}
	template <typename T = uintptr_t> T ConeWarningAnim() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112CEA0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CalculateVertices() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112CF18))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T CalculateTriangles() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112D084))(this);
	}
	template <typename T = int32_t> T GetTriangleCount() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112D068))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CalculateUV(int32_t vertexCount) {
		return ((T (*)(WarningController*, int32_t))(Il2CppBase() + 0x112D184))(this, vertexCount);
	}
	template <typename T = void> T CreateConeMesh() {
		return ((T (*)(WarningController*))(Il2CppBase() + 0x112CD54))(this);
	}

};

