#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicSpawnerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicSpawnerComponent"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IgnoreActorParent() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& RandomNames() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& Once() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MagicSpawnerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A2F09C))(this, targetObject);
	}

};

