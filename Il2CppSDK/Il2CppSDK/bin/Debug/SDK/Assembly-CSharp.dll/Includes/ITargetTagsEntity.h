#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetTagsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetTagsEntity"));
	}


	template <typename R = TargetTagsComponent*> R get_targetTags() {
		return ((R (*)(ITargetTagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTargetTags() {
		return ((R (*)(ITargetTagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ITargetTagsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ITargetTagsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveTargetTags() {
		return ((R (*)(ITargetTagsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

