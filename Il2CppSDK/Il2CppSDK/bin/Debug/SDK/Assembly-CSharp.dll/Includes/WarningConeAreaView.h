#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWarningAreaView.h" 

class WarningConeAreaView : public BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningConeAreaView"));
	}

	template <typename R = uintptr_t> R& _baseCone() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _animatedCone() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& _trianglesPerRad() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<float, uintptr_t>*& _meshСache() {
		return *(Il2CppDictionary<float, uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _currentCoroutine() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R OnStartPlay() {
		return ((R (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C2B4))(this);
	}
	template <typename R = uintptr_t> R Rotune() {
		return ((R (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C5EC))(this);
	}
	 Il2CppList<uintptr_t>* CalculateVertices() {
		return ((Il2CppList<uintptr_t>* (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C664))(this);
	}
	 Il2CppList<int32_t>* CalculateTriangles() {
		return ((Il2CppList<int32_t>* (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C7BC))(this);
	}
	template <typename R = int32_t> R GetTriangleCount() {
		return ((R (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C7AC))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R CalculateUV(int32_t vertexCount) {
		return ((R (*)(WarningConeAreaView*, int32_t))(Il2CppBase() + 0x112C8AC))(this, vertexCount);
	}
	template <typename R = void> R CreateConeMesh() {
		return ((R (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C3CC))(this);
	}

};

