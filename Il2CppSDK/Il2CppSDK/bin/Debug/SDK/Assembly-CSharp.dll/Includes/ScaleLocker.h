#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScaleLocker"));
	}

	template <typename T = bool> T& update() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& _scale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& scaleParent() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppVector3> T InvVector3(Il2CppVector3 vec3) {
		return ((T (*)(ScaleLocker*, Il2CppVector3))(Il2CppBase() + 0x1357080))(this, vec3);
	}
	template <typename T = Il2CppVector3> T InvVector3NoUpdate(Il2CppVector3 vec3) {
		return ((T (*)(ScaleLocker*, Il2CppVector3))(Il2CppBase() + 0x13570E0))(this, vec3);
	}
	template <typename T = float> T CheckedFloat(float a) {
		return ((T (*)(ScaleLocker*, float))(Il2CppBase() + 0x13570C8))(this, a);
	}
	template <typename T = void> T SetScale() {
		return ((T (*)(ScaleLocker*))(Il2CppBase() + 0x1357110))(this);
	}
	template <typename T = void> T UpdateScale() {
		return ((T (*)(ScaleLocker*))(Il2CppBase() + 0x13571B0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ScaleLocker*))(Il2CppBase() + 0x1357278))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ScaleLocker*))(Il2CppBase() + 0x13572DC))(this);
	}

};

}
