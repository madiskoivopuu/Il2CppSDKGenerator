#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseAuraComponent.h" 

class RepeatMagicComponent : public BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepeatMagicComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Period() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& AsChildren() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T ContainsMagic(Il2CppString* magicName) {
		return ((T (*)(RepeatMagicComponent*, Il2CppString*))(Il2CppBase() + 0x1191BF8))(this, magicName);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(RepeatMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1191CA0))(this, targetObject);
	}

};

