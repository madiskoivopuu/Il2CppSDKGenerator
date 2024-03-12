#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JSONHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JSONHelper"));
	}

	template <typename T = Il2CppString*> static T& TEMPLATE_COMPONENT_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TEMPLATE_VALUE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LIST_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& JsonSerializer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& SYMBOL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_JsonSerializer() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E15B4))(0);
	}
	template <typename T = void> static T set_JsonSerializer(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14E1618))(0, value);
	}
	template <typename T = void*> static T GetTypesWithHelpAttribute(uintptr_t assembly) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14E1AE4))(0, assembly);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T ParseDict(void* jsonStrings) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, jsonStrings);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T ParseStringMap(void* jsonStrings) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x14E1B5C))(0, jsonStrings);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T ParseListWithoutNames(void* jsonStrings, Il2CppArray<uintptr_t>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((T (*)(void *, void*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14E1FFC))(0, jsonStrings, componentNames, componentTypes);
	}
	template <typename T = Il2CppList<void*>*> static T ParseList(Il2CppString* jsonString, Il2CppArray<uintptr_t>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14E2D64))(0, jsonString, componentNames, componentTypes);
	}
	template <typename T = uintptr_t> static T ParseEntity(Il2CppString* jsonString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, jsonString);
	}
	template <typename T = uintptr_t> static T ParseEntity_1(uintptr_t context, Il2CppString* jsonString) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(0, context, jsonString);
	}
	template <typename T = uintptr_t> static T ParseEntity_2(uintptr_t context, Il2CppString* jsonString) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14E3780))(0, context, jsonString);
	}
	template <typename T = Il2CppString*> static T ToJson(uintptr_t entity, Il2CppArray<uintptr_t>* componentNames) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14E37F8))(0, entity, componentNames);
	}
	template <typename T = Il2CppString*> static T ToJson_1(Il2CppList<void*>* entities, Il2CppArray<uintptr_t>* componentNames, bool compress) {
		return ((T (*)(void *, Il2CppList<void*>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x14E3A44))(0, entities, componentNames, compress);
	}
	template <typename T = Il2CppString*> static T ToRoomJson(Il2CppString* roomName, Il2CppList<void*>* entities, Il2CppArray<uintptr_t>* componentNames, bool compress) {
		return ((T (*)(void *, Il2CppString*, Il2CppList<void*>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x14E3D3C))(0, roomName, entities, componentNames, compress);
	}
	template <typename T = Il2CppString*> static T GetShortName(Il2CppDictionary<Il2CppString*, Il2CppString*>* names, Il2CppString* name) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x14E3FE4))(0, names, name);
	}
	template <typename T = Il2CppString*> static T GetFullName(Il2CppDictionary<Il2CppString*, Il2CppString*>* names, Il2CppString* name) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x14E2BF4))(0, names, name);
	}
	template <typename T = void> static T ParseDictg__ParseStrings|9_0(Il2CppString* jsonString, uintptr_t ) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, jsonString, );
	}

};

}
