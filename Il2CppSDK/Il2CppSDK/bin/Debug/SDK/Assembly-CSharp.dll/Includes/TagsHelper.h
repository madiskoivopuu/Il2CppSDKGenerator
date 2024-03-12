#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TagsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TagsHelper"));
	}


	template <typename T = bool> static T TryAddDataTag(uintptr_t targetData, Il2CppString* tag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16A376C))(0, targetData, tag);
	}
	template <typename T = bool> static T ContainsAnyTags(void* targetTags, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, void*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A3B28))(0, targetTags, tags);
	}
	template <typename T = bool> static T ContainsAllTags(void* targetTags, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, void*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A3CAC))(0, targetTags, tags);
	}
	template <typename T = bool> static T ContainsTag(void* targetTags, Il2CppString* tag) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x16A3E34))(0, targetTags, tag);
	}
	template <typename T = bool> static T ContainsTag_1(uintptr_t target, Il2CppString* tag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16A3FF8))(0, target, tag);
	}
	template <typename T = bool> static T ContainsAnyTags_1(uintptr_t targetTags, uintptr_t tags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A4134))(0, targetTags, tags);
	}
	template <typename T = bool> static T ContainsAnyTags_2(uintptr_t target, uintptr_t tags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A4158))(0, target, tags);
	}
	template <typename T = bool> static T ContainsAnyTags_3(uintptr_t target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A4294))(0, target, tags);
	}
	template <typename T = bool> static T ContainsAllTags_1(uintptr_t target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A43C8))(0, target, tags);
	}
	template <typename T = bool> static T ContainsEquipTag(uintptr_t target, Il2CppString* tag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16A44FC))(0, target, tag);
	}
	template <typename T = bool> static T ContainsAnyEquipTags(uintptr_t target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A45D0))(0, target, tags);
	}
	template <typename T = bool> static T ContainsAllEquipTags(uintptr_t target, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16A4714))(0, target, tags);
	}

};

}
