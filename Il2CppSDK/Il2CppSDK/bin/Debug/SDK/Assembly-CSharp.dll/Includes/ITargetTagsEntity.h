#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetTagsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetTagsEntity"));
	}


	template <typename T = uintptr_t> T get_targetTags() {
		return ((T (*)(ITargetTagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTargetTags() {
		return ((T (*)(ITargetTagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ITargetTagsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ITargetTagsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveTargetTags() {
		return ((T (*)(ITargetTagsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
