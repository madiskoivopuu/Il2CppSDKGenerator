#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoMagicSpawnerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoMagicSpawnerComponent"));
	}

	template <typename R = Il2CppString*> R& Activator() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AutoMagicSpawnerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A6413C))(this, targetObject);
	}

};
