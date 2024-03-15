#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TagsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TagsHelper"));
	}


	template <typename R = bool> static R TryAddDataTag(ITagsEntity* targetData, Il2CppString* tag) {
		return ((R (*)(void *, ITagsEntity*, Il2CppString*))(Il2CppBase() + 0x16A376C))(0, targetData, tag);
	}
	template <typename R = bool> static R ContainsAnyTags(IList1Il2CppString*>* targetTags, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(void *, IList1Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16A3B28))(0, targetTags, tags);
	}
	template <typename R = bool> static R ContainsAllTags(IList1Il2CppString*>* targetTags, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(void *, IList1Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16A3CAC))(0, targetTags, tags);
	}
	template <typename R = bool> static R ContainsTag(IList1Il2CppString*>* targetTags, Il2CppString* tag) {
		return ((R (*)(void *, IList1Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x16A3E34))(0, targetTags, tag);
	}
	template <typename R = bool> static R ContainsTag_1(ITagsEntity* target, Il2CppString* tag) {
		return ((R (*)(void *, ITagsEntity*, Il2CppString*))(Il2CppBase() + 0x16A3FF8))(0, target, tag);
	}
	template <typename R = bool> static R ContainsAnyTags_1(StringValuesComponent* targetTags, StringValuesComponent* tags) {
		return ((R (*)(void *, StringValuesComponent*, StringValuesComponent*))(Il2CppBase() + 0x16A4134))(0, targetTags, tags);
	}
	template <typename R = bool> static R ContainsAnyTags_2(ITagsEntity* target, StringValuesComponent* tags) {
		return ((R (*)(void *, ITagsEntity*, StringValuesComponent*))(Il2CppBase() + 0x16A4158))(0, target, tags);
	}
	template <typename R = bool> static R ContainsAnyTags_3(ITagsEntity* target, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(void *, ITagsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16A4294))(0, target, tags);
	}
	template <typename R = bool> static R ContainsAllTags_1(ITagsEntity* target, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(void *, ITagsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16A43C8))(0, target, tags);
	}
	template <typename R = bool> static R ContainsEquipTag(GameEntity* target, Il2CppString* tag) {
		return ((R (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x16A44FC))(0, target, tag);
	}
	template <typename R = bool> static R ContainsAnyEquipTags(GameEntity* target, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(void *, GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16A45D0))(0, target, tags);
	}
	template <typename R = bool> static R ContainsAllEquipTags(GameEntity* target, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(void *, GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16A4714))(0, target, tags);
	}

};

