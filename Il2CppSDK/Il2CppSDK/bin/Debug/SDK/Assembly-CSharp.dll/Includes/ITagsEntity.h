#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITagsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITagsEntity"));
	}


	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(ITagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(ITagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ITagsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ITagsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(ITagsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

