#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseAuraComponent" 

class CollisionMagicComponent: BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionMagicComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Period() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CollisionMagicComponent*, uintptr_t))(Il2CppBase() + 0xE23C00))(this, targetObject);
	}
	template <typename T = bool> T ContainsMagic(Il2CppString* magicName) {
		return ((T (*)(CollisionMagicComponent*, Il2CppString*))(Il2CppBase() + 0xE23CB4))(this, magicName);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CollisionMagicComponent*, uintptr_t))(Il2CppBase() + 0xE23D5C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CollisionMagicComponent*, uintptr_t))(Il2CppBase() + 0xE23DF4))(this, writer);
	}

};

}
