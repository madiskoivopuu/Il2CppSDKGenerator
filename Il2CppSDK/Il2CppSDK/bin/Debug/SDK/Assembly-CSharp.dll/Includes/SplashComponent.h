#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseAuraComponent.h" 

class SplashComponent : public BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplashComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Sequence() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = bool> R ContainsMagic(Il2CppString* magicName) {
		return ((R (*)(SplashComponent*, Il2CppString*))(Il2CppBase() + 0x14884D8))(this, magicName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SplashComponent*, Il2CppObject*))(Il2CppBase() + 0x14885D4))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SplashComponent*, uintptr_t))(Il2CppBase() + 0x148868C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SplashComponent*, uintptr_t))(Il2CppBase() + 0x1488754))(this, writer);
	}

};

