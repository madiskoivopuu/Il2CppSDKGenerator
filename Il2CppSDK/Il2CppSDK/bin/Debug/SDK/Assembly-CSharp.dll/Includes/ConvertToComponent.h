#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConvertToComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConvertToComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<ResourceElement*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ConvertToComponent*, Il2CppObject*))(Il2CppBase() + 0x15F3914))(this, target);
	}
	template <typename R = Il2CppString*> R GetName(ICommonContexts* world, Il2CppString* currentName, GameEntity* target, GameEntity* source) {
		return ((R (*)(ConvertToComponent*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x15F39BC))(this, world, currentName, target, source);
	}

};

