#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoMagicSpawnerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoMagicSpawnerComponent"));
	}

	template <typename T = Il2CppString*> T& Activator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(AutoMagicSpawnerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A6413C))(this, targetObject);
	}

};

