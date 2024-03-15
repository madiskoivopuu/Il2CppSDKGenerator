#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsSaveJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSaveJsonConverter"));
	}

	template <typename R = char> static R& PART_SEPARATOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = char> static R& OBJECT_SEPARATOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = char> static R& PROPERTY_SEPARATOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = char> static R& PARAMS_SEPARATOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(QuestsSaveJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x170834C))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(QuestsSaveJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1708AB0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = void> R ParseResources(Il2CppString* data, Il2CppList<Resource*>* result) {
		return ((R (*)(QuestsSaveJsonConverter*, Il2CppString*, Il2CppList<Resource*>*))(Il2CppBase() + 0x1709490))(this, data, result);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(QuestsSaveJsonConverter*))(Il2CppBase() + 0x170970C))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(QuestsSaveJsonConverter*, uintptr_t))(Il2CppBase() + 0x1709714))(this, objectType);
	}

};

