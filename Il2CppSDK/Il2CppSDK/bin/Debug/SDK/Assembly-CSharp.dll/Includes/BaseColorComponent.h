#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseColorComponent"));
	}

	template <typename R = Il2CppString*> R& HexColor() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& _color() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& _lastHexValue() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = uintptr_t> R get_Color() {
		return ((R (*)(BaseColorComponent*))(Il2CppBase() + 0x166C9FC))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseColorComponent*, Il2CppObject*))(Il2CppBase() + 0x166CB00))(this, targetObject);
	}

};

