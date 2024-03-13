#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWarningAreaView.h" 

class WarningConeAreaView : public BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningConeAreaView"));
	}

	template <typename T = uintptr_t> T& _baseCone() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _animatedCone() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& _trianglesPerRad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<float, uintptr_t>*> static T& _meshСache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _currentCoroutine() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnStartPlay() {
		return ((T (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C2B4))(this);
	}
	template <typename T = uintptr_t> T Rotune() {
		return ((T (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C5EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CalculateVertices() {
		return ((T (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C664))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T CalculateTriangles() {
		return ((T (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C7BC))(this);
	}
	template <typename T = int32_t> T GetTriangleCount() {
		return ((T (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C7AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CalculateUV(int32_t vertexCount) {
		return ((T (*)(WarningConeAreaView*, int32_t))(Il2CppBase() + 0x112C8AC))(this, vertexCount);
	}
	template <typename T = void> T CreateConeMesh() {
		return ((T (*)(WarningConeAreaView*))(Il2CppBase() + 0x112C3CC))(this);
	}

};

