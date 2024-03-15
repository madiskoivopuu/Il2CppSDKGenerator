#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningController"));
	}

	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& WarningTime() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& WarningColor() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& BaseColorAnim() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& AnimatedColorAnim() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& AnimatedRangeAnim() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& isCircle() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& CircleWarning() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _baseCircle() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _holeCircle() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _circleAnimated() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& SafeZone() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& Holed() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = bool> R& isLine() {
		return *(R*)((uintptr_t)this + 0x75);
	}
	template <typename R = uintptr_t> R& LineWarning() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _rightPart() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _leftPart() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _middlePart() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& isCone() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = uintptr_t> R& ConeWarning() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _baseCone() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _animatedCone() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& trianglesPerRad() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	 Il2CppList<uintptr_t>*& vertices() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R Start() {
		return ((R (*)(WarningController*))(Il2CppBase() + 0x112C9F0))(this);
	}
	template <typename R = uintptr_t> R CircleWarningAnim() {
		return ((R (*)(WarningController*))(Il2CppBase() + 0x112CC64))(this);
	}
	template <typename R = uintptr_t> R LineWarningAnim() {
		return ((R (*)(WarningController*))(Il2CppBase() + 0x112CCDC))(this);
	}
	template <typename R = uintptr_t> R ConeWarningAnim() {
		return ((R (*)(WarningController*))(Il2CppBase() + 0x112CEA0))(this);
	}
	 Il2CppList<uintptr_t>* CalculateVertices() {
		return ((Il2CppList<uintptr_t>* (*)(WarningController*))(Il2CppBase() + 0x112CF18))(this);
	}
	 Il2CppList<int32_t>* CalculateTriangles() {
		return ((Il2CppList<int32_t>* (*)(WarningController*))(Il2CppBase() + 0x112D084))(this);
	}
	template <typename R = int32_t> R GetTriangleCount() {
		return ((R (*)(WarningController*))(Il2CppBase() + 0x112D068))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R CalculateUV(int32_t vertexCount) {
		return ((R (*)(WarningController*, int32_t))(Il2CppBase() + 0x112D184))(this, vertexCount);
	}
	template <typename R = void> R CreateConeMesh() {
		return ((R (*)(WarningController*))(Il2CppBase() + 0x112CD54))(this);
	}

};

