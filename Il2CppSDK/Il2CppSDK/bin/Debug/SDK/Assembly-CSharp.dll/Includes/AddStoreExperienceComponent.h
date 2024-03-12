#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddStoreExperienceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddStoreExperienceComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AddStoreExperienceComponent*, uintptr_t))(Il2CppBase() + 0x18AFD6C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AddStoreExperienceComponent*, uintptr_t))(Il2CppBase() + 0x18AFE04))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AddStoreExperienceComponent*, uintptr_t))(Il2CppBase() + 0x18AFF60))(this, writer);
	}

};

}
