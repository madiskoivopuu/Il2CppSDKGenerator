#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TowerDefence {

class RectSizeSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TowerDefence", "RectSizeSync"));
	}

	template <typename T = uintptr_t> T& _observed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _controlled() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _minWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _maxWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _minHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _maxHeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppRect> T& _offset() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RectSizeSync*))(Il2CppBase() + 0x139CE94))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(RectSizeSync*))(Il2CppBase() + 0x139CF04))(this);
	}

};

}
