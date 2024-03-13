#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TagsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TagsHelper"));
	}


	template <typename T = bool> static T TryAddDataTag(ITagsEntity* targetData, Il2CppString* tag) {
		return ((T (*)(void *, ITagsEntity*, Il2CppString*))(Il2CppBase() + 0x16A376C))(0, targetData, tag);
	}
	template <typename T = bool> static T ContainsAnyTags(IList1Il2CppString*>* targetTags, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, IList1Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A3B28))(0, targetTags, tags);
	}
	template <typename T = bool> static T ContainsAllTags(IList1Il2CppString*>* targetTags, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, IList1Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A3CAC))(0, targetTags, tags);
	}
	template <typename T = bool> static T ContainsTag(IList1Il2CppString*>* targetTags, Il2CppString* tag) {
		return ((T (*)(void *, IList1Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x16A3E34))(0, targetTags, tag);
	}
	template <typename T = bool> static T ContainsTag_1(ITagsEntity* target, Il2CppString* tag) {
		return ((T (*)(void *, ITagsEntity*, Il2CppString*))(Il2CppBase() + 0x16A3FF8))(0, target, tag);
	}
	template <typename T = bool> static T ContainsAnyTags_1(StringValuesComponent* targetTags, StringValuesComponent* tags) {
		return ((T (*)(void *, StringValuesComponent*, StringValuesComponent*))(Il2CppBase() + 0x16A4134))(0, targetTags, tags);
	}
	template <typename T = bool> static T ContainsAnyTags_2(ITagsEntity* target, StringValuesComponent* tags) {
		return ((T (*)(void *, ITagsEntity*, StringValuesComponent*))(Il2CppBase() + 0x16A4158))(0, target, tags);
	}
	template <typename T = bool> static T ContainsAnyTags_3(ITagsEntity* target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, ITagsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A4294))(0, target, tags);
	}
	template <typename T = bool> static T ContainsAllTags_1(ITagsEntity* target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, ITagsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A43C8))(0, target, tags);
	}
	template <typename T = bool> static T ContainsEquipTag(GameEntity* target, Il2CppString* tag) {
		return ((T (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x16A44FC))(0, target, tag);
	}
	template <typename T = bool> static T ContainsAnyEquipTags(GameEntity* target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A45D0))(0, target, tags);
	}
	template <typename T = bool> static T ContainsAllEquipTags(GameEntity* target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A4714))(0, target, tags);
	}

};

