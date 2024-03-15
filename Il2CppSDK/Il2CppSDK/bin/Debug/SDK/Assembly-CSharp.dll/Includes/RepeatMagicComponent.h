#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseAuraComponent.h" 

class RepeatMagicComponent : public BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepeatMagicComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& Period() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& AsChildren() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = bool> R ContainsMagic(Il2CppString* magicName) {
		return ((R (*)(RepeatMagicComponent*, Il2CppString*))(Il2CppBase() + 0x1191BF8))(this, magicName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RepeatMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1191CA0))(this, targetObject);
	}

};

