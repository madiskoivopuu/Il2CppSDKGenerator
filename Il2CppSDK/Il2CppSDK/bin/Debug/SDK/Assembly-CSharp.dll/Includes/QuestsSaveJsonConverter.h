#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsSaveJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSaveJsonConverter"));
	}

	template <typename T = char> static T& PART_SEPARATOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& OBJECT_SEPARATOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& PROPERTY_SEPARATOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& PARAMS_SEPARATOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(QuestsSaveJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x170834C))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(QuestsSaveJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1708AB0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = void> T ParseResources(Il2CppString* data, Il2CppList<Resource*>* result) {
		return ((T (*)(QuestsSaveJsonConverter*, Il2CppString*, Il2CppList<Resource*>*))(Il2CppBase() + 0x1709490))(this, data, result);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(QuestsSaveJsonConverter*))(Il2CppBase() + 0x170970C))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(QuestsSaveJsonConverter*, uintptr_t))(Il2CppBase() + 0x1709714))(this, objectType);
	}

};

