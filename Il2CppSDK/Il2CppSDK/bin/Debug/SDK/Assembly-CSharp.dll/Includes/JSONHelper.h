#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JSONHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JSONHelper"));
	}

	template <typename R = Il2CppString*> static R& TEMPLATE_COMPONENT_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TEMPLATE_VALUE_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& LIST_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& JsonSerializer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = char> static R& SYMBOL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> static R get_JsonSerializer() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E15B4))(0);
	}
	template <typename R = void> static R set_JsonSerializer(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x14E1618))(0, value);
	}
	 static IEnumerable1uintptr_t>* GetTypesWithHelpAttribute(uintptr_t assembly) {
		return ((IEnumerable1uintptr_t>* (*)(void *, uintptr_t))(Il2CppBase() + 0x14E1AE4))(0, assembly);
	}
	 static Il2CppDictionary<Il2CppString*, EntityBlueprint*>* ParseDict(IEnumerable1Il2CppString*>* jsonStrings) {
		return ((Il2CppDictionary<Il2CppString*, EntityBlueprint*>* (*)(void *, IEnumerable1Il2CppString*>*))(Il2CppBase() + 0x0))(0, jsonStrings);
	}
	 static Il2CppDictionary<Il2CppString*, int32_t>* ParseStringMap(IEnumerable1Il2CppString*>* jsonStrings) {
		return ((Il2CppDictionary<Il2CppString*, int32_t>* (*)(void *, IEnumerable1Il2CppString*>*))(Il2CppBase() + 0x14E1B5C))(0, jsonStrings);
	}
	 static Il2CppList<EntityBlueprint*>* ParseListWithoutNames(IEnumerable1Il2CppString*>* jsonStrings, Il2CppArray<Il2CppString*>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((Il2CppList<EntityBlueprint*>* (*)(void *, IEnumerable1Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14E1FFC))(0, jsonStrings, componentNames, componentTypes);
	}
	 static Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* ParseList(Il2CppString* jsonString, Il2CppArray<Il2CppString*>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* (*)(void *, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14E2D64))(0, jsonString, componentNames, componentTypes);
	}
	 static uintptr_t ParseEntity(Il2CppString* jsonString) {
		return ((uintptr_t (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, jsonString);
	}
	 static uintptr_t ParseEntity_1(uintptr_t context, Il2CppString* jsonString) {
		return ((uintptr_t (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(0, context, jsonString);
	}
	template <typename R = GameDataBlueprint*> static R ParseEntity_2(GameContext* context, Il2CppString* jsonString) {
		return ((R (*)(void *, GameContext*, Il2CppString*))(Il2CppBase() + 0x14E3780))(0, context, jsonString);
	}
	template <typename R = Il2CppString*> static R ToJson(EntityBlueprint* entity, Il2CppArray<Il2CppString*>* componentNames) {
		return ((R (*)(void *, EntityBlueprint*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x14E37F8))(0, entity, componentNames);
	}
	template <typename R = Il2CppString*> static R ToJson_1(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* entities, Il2CppArray<Il2CppString*>* componentNames, bool compress) {
		return ((R (*)(void *, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x14E3A44))(0, entities, componentNames, compress);
	}
	template <typename R = Il2CppString*> static R ToRoomJson(Il2CppString* roomName, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* entities, Il2CppArray<Il2CppString*>* componentNames, bool compress) {
		return ((R (*)(void *, Il2CppString*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x14E3D3C))(0, roomName, entities, componentNames, compress);
	}
	template <typename R = Il2CppString*> static R GetShortName(Il2CppDictionary<Il2CppString*, Il2CppString*>* names, Il2CppString* name) {
		return ((R (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x14E3FE4))(0, names, name);
	}
	template <typename R = Il2CppString*> static R GetFullName(Il2CppDictionary<Il2CppString*, Il2CppString*>* names, Il2CppString* name) {
		return ((R (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x14E2BF4))(0, names, name);
	}
	template <typename R = void> static R ParseDictg__ParseStrings|9_0(Il2CppString* jsonString, uintptr_t ) {
		return ((R (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, jsonString, );
	}

};

