#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreviewPrefabComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PreviewPrefabComponent"));
	}

	template <typename R = Il2CppString*> R& PreviewName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& PrefabName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ProtoModels::WorldResourcesType> R& ResourceType() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1<float>*& Angle() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PreviewPrefabComponent*, Il2CppObject*))(Il2CppBase() + 0x16E3734))(this, targetObject);
	}

};

