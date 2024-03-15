#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseAuraComponent.h" 

class CollisionMagicComponent : public BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionMagicComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Period() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CollisionMagicComponent*, Il2CppObject*))(Il2CppBase() + 0xE23C00))(this, targetObject);
	}
	template <typename R = bool> R ContainsMagic(Il2CppString* magicName) {
		return ((R (*)(CollisionMagicComponent*, Il2CppString*))(Il2CppBase() + 0xE23CB4))(this, magicName);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CollisionMagicComponent*, uintptr_t))(Il2CppBase() + 0xE23D5C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CollisionMagicComponent*, uintptr_t))(Il2CppBase() + 0xE23DF4))(this, writer);
	}

};

