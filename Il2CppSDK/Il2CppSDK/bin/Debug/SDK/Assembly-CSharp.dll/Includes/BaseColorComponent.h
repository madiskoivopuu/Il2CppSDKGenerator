#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseColorComponent"));
	}

	template <typename T = Il2CppString*> T& HexColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _lastHexValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Color() {
		return ((T (*)(BaseColorComponent*))(Il2CppBase() + 0x166C9FC))(this);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BaseColorComponent*, Il2CppObject*))(Il2CppBase() + 0x166CB00))(this, targetObject);
	}

};

