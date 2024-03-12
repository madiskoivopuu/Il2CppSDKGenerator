#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreviewPrefabComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PreviewPrefabComponent"));
	}

	template <typename T = Il2CppString*> T& PreviewName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PrefabName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ResourceType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Angle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PreviewPrefabComponent*, uintptr_t))(Il2CppBase() + 0x16E3734))(this, targetObject);
	}

};

}
