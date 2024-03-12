#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderValueByDistance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShaderValueByDistance"));
	}

	template <typename T = Il2CppString*> T& _valueName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _minValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _maxValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _minDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _maxDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _renderers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _value() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ShaderValueByDistance*))(Il2CppBase() + 0x162F6DC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ShaderValueByDistance*))(Il2CppBase() + 0x162F6E0))(this);
	}

};

}
