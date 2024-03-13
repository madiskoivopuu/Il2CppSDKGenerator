#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseAuraComponent.h" 

class SplashComponent : public BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplashComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T ContainsMagic(Il2CppString* magicName) {
		return ((T (*)(SplashComponent*, Il2CppString*))(Il2CppBase() + 0x14884D8))(this, magicName);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SplashComponent*, Il2CppObject*))(Il2CppBase() + 0x14885D4))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SplashComponent*, uintptr_t))(Il2CppBase() + 0x148868C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SplashComponent*, uintptr_t))(Il2CppBase() + 0x1488754))(this, writer);
	}

};

