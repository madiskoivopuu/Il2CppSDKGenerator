#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITagsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITagsEntity"));
	}


	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(ITagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(ITagsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ITagsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ITagsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(ITagsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

