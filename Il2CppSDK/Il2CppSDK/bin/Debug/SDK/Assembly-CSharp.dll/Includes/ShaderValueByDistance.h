#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderValueByDistance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShaderValueByDistance"));
	}

	template <typename R = Il2CppString*> R& _valueName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _minValue() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _maxValue() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& _minDistance() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _maxDistance() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _renderers() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1float>*& _value() {
		return *(Nullable1float>**)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(ShaderValueByDistance*))(Il2CppBase() + 0x162F6DC))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(ShaderValueByDistance*))(Il2CppBase() + 0x162F6E0))(this);
	}

};

