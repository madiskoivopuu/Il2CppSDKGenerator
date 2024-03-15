#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddStoreExperienceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddStoreExperienceComponent"));
	}

	template <typename R = Il2CppArray<Entry>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AddStoreExperienceComponent*, Il2CppObject*))(Il2CppBase() + 0x18AFD6C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AddStoreExperienceComponent*, uintptr_t))(Il2CppBase() + 0x18AFE04))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AddStoreExperienceComponent*, uintptr_t))(Il2CppBase() + 0x18AFF60))(this, writer);
	}

};

